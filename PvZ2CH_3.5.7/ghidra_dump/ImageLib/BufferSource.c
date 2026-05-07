// Class: ImageLib::BufferSource


/* ImageLib::BufferSource::InitSource(jpeg_decompress_struct*) */

void ImageLib::BufferSource::InitSource(jpeg_decompress_struct *param_1)

{
  return;
}


/* ImageLib::BufferSource::FillInputBuffer(jpeg_decompress_struct*) */

undefined8 ImageLib::BufferSource::FillInputBuffer(jpeg_decompress_struct *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0x78;
  (**(code **)(lVar1 + 8))(param_1,0xffffffff);
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  puVar2[1] = 2;
  FillInputBuffer(jpeg_decompress_struct*)::mybuffer = 0xff;
  DAT_06bc49e1 = 0xd9;
  *puVar2 = &FillInputBuffer(jpeg_decompress_struct*)::mybuffer;
  return 1;
}


/* ImageLib::BufferSource::SkipInputData(jpeg_decompress_struct*, long) */

void ImageLib::BufferSource::SkipInputData(jpeg_decompress_struct *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (0 < param_2) {
    lVar1 = plVar2[1];
    if (lVar1 < param_2) {
      do {
        param_2 = param_2 - lVar1;
        (*(code *)plVar2[3])(param_1);
        lVar1 = plVar2[1];
      } while (lVar1 < param_2);
    }
    plVar2[1] = lVar1 - param_2;
    *plVar2 = *plVar2 + param_2;
  }
  return;
}


/* ImageLib::BufferSource::TermSource(jpeg_decompress_struct*) */

void ImageLib::BufferSource::TermSource(jpeg_decompress_struct *param_1)

{
  return;
}


/* ImageLib::BufferSource::BufferSource(Sexy::Buffer const*, jpeg_decompress_struct*) */

void __thiscall
ImageLib::BufferSource::BufferSource
          (BufferSource *this,Buffer *param_1,jpeg_decompress_struct *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_2 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(*(code *)**(undefined8 **)(param_2 + 8))(param_2,0,0x38);
    *(undefined8 **)(param_2 + 0x28) = puVar3;
  }
  puVar3[2] = InitSource;
  puVar3[3] = FillInputBuffer;
  puVar3[4] = SkipInputData;
  puVar3[5] = jpeg_resync_to_restart;
  puVar3[6] = TermSource;
  iVar1 = Sexy::Buffer::GetDataLen(param_1);
  puVar3[1] = (long)iVar1;
  uVar2 = Sexy::Buffer::GetDataPtr(param_1);
  *puVar3 = uVar2;
  return;
}

