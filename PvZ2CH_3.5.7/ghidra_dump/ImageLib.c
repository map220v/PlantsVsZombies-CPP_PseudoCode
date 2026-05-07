// Class: ImageLib


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageLib::WriteTGAImage(std::string const&, ImageLib::Image*) */

void ImageLib::WriteTGAImage(string *param_1,Image *param_2)

{
  char *__filename;
  FILE *__s;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __filename = (char *)FUN_0547429c();
  __s = fopen(__filename,"wb");
  if (__s != (FILE *)0x0) {
    local_1a = 0;
    fwrite(&local_1a,1,1,__s);
    local_19 = 0;
    fwrite(&local_19,1,1,__s);
    local_18 = 2;
    fwrite(&local_18,1,1,__s);
    local_14 = 0;
    fwrite(&local_14,2,1,__s);
    local_12 = 0;
    fwrite(&local_12,2,1,__s);
    local_17 = 0;
    fwrite(&local_17,1,1,__s);
    local_10 = 0;
    fwrite(&local_10,2,1,__s);
    local_e = 0;
    fwrite(&local_e,2,1,__s);
    local_c = (undefined2)*(undefined4 *)(param_2 + 8);
    fwrite(&local_c,2,1,__s);
    local_a = (undefined2)*(undefined4 *)(param_2 + 0xc);
    fwrite(&local_a,2,1,__s);
    local_16 = 0x20;
    fwrite(&local_16,1,1,__s);
    local_15 = 0x28;
    fwrite(&local_15,1,1,__s);
    fwrite(*(void **)(param_2 + 0x10),4,(long)(*(int *)(param_2 + 8) * *(int *)(param_2 + 0xc)),__s)
    ;
    fclose(__s);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s != (FILE *)0x0);
  }
  return;
}


/* ImageLib::GetImage(Sexy::Buffer const*) */

long ImageLib::GetImage(Buffer *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = GetPNGImage(param_1);
  if ((lVar2 != 0) || (lVar2 = GetJPEGImage(param_1), lVar2 != 0)) {
    uVar1 = Sexy::Buffer::GetDataLen(param_1);
    *(undefined4 *)(lVar2 + 0x18) = uVar1;
  }
  return lVar2;
}


/* ImageLib::GetImage(std::string const&, bool, int) */

void ImageLib::GetImage(string *param_1,bool param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == -1) {
    param_3 = FUN_0530a99c(param_1,param_2);
  }
  if (param_3 == 0) {
    lVar1 = FUN_0530b07c(param_1,param_2,2);
    if (lVar1 != 0) {
      return;
    }
    param_3 = 3;
  }
  FUN_0530b07c(param_1,param_2,param_3);
  return;
}


/* ImageLib::PngError(png_struct_def*, char const*) */

int ImageLib::PngError(png_struct_def *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = puts(param_2);
  return iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageLib::GetPNGImage(png_struct_def*, png_info_struct*) */

void ImageLib::GetPNGImage(png_struct_def *param_1,png_info_struct *param_2)

{
  ulong uVar1;
  void *pvVar2;
  Image *this;
  ulong uVar3;
  png_info_struct *local_40;
  png_struct_def *local_38;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  long local_20;
  ulong local_18;
  void *local_10;
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_40 = param_2;
  local_38 = param_1;
  png_read_info();
  png_get_IHDR(local_38,local_40,&local_20,&local_18,auStack_2c,auStack_28,auStack_24,0,0);
  png_set_tRNS_to_alpha(local_38);
  png_set_filler(local_38,0xff,1);
  png_set_tRNS_to_alpha(local_38);
  png_set_gray_to_rgb(local_38);
  png_set_bgr(local_38);
  uVar1 = local_18 * local_20 * 4;
  if (0x1fc0000000000000 < local_18 * local_20) {
    uVar1 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new__(uVar1);
  local_10 = pvVar2;
  if (local_18 != 0) {
    do {
      uVar3 = uVar3 + 1;
      png_read_rows(local_38,&local_10,0);
      local_10 = (void *)((long)local_10 + local_20 * 4);
    } while (uVar3 < local_18);
  }
  png_read_end(local_38,local_40);
  png_destroy_read_struct(&local_38,&local_40,0);
  this = ::operator_new(0x20);
  Image::Image(this);
  *(undefined4 *)(this + 8) = (undefined4)local_20;
  *(undefined4 *)(this + 0xc) = (undefined4)local_18;
  *(void **)(this + 0x10) = pvVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageLib::GetPNGImage(Sexy::Buffer const*) */

void ImageLib::GetPNGImage(Buffer *param_1)

{
  int iVar1;
  undefined8 uVar2;
  __jmp_buf_tag *local_18;
  png_info_struct *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = (__jmp_buf_tag *)png_create_read_struct("1.0.5",0,0,0);
  if (local_18 != (__jmp_buf_tag *)0x0) {
    png_set_read_fn(local_18,param_1,FUN_0530c168);
    local_18[1].__jmpbuf[7] = (long)PngError;
    local_10 = (png_info_struct *)png_create_info_struct(local_18);
    if (local_10 == (png_info_struct *)0x0) {
      png_destroy_read_struct(&local_18,0,0);
    }
    else {
      iVar1 = setjmp(local_18);
      if (iVar1 == 0) {
        uVar2 = GetPNGImage((png_struct_def *)local_18,local_10);
        goto LAB_0530bc00;
      }
      png_destroy_read_struct(&local_18,&local_10,0);
    }
  }
  uVar2 = 0;
LAB_0530bc00:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageLib::GetPNGImage(std::string const&, int) */

void ImageLib::GetPNGImage(string *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  __jmp_buf_tag *local_18;
  png_info_struct *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0547429c();
  lVar3 = FUN_0530b998(uVar2,param_2);
  if (lVar3 != 0) {
    local_18 = (__jmp_buf_tag *)png_create_read_struct("1.0.5",0,0,0);
    png_set_read_fn(local_18,lVar3,FUN_0530b948);
    if (local_18 != (__jmp_buf_tag *)0x0) {
      local_18[1].__jmpbuf[7] = (long)PngError;
      local_10 = (png_info_struct *)png_create_info_struct(local_18);
      if (local_10 == (png_info_struct *)0x0) {
        FUN_0530b828(lVar3);
        png_destroy_read_struct(&local_18,0,0);
        goto LAB_0530bcf0;
      }
      iVar1 = setjmp(local_18);
      if (iVar1 == 0) {
        uVar2 = GetPNGImage((png_struct_def *)local_18,local_10);
        FUN_0530b828(lVar3);
        goto LAB_0530bcf4;
      }
      png_destroy_read_struct(&local_18,&local_10,0);
    }
    FUN_0530b828(lVar3);
  }
LAB_0530bcf0:
  uVar2 = 0;
LAB_0530bcf4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageLib::WritePNGImage(std::string const&, ImageLib::Image*, int) */

void ImageLib::WritePNGImage(string *param_1,Image *param_2,int param_3)

{
  int iVar1;
  char *__filename;
  FILE *__stream;
  undefined8 uVar2;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_24;
  __jmp_buf_tag *local_20;
  long local_18;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __filename = (char *)FUN_0547429c();
  __stream = fopen(__filename,"wb");
  if (__stream != (FILE *)0x0) {
    local_20 = (__jmp_buf_tag *)png_create_write_struct("1.0.5",0,0,0);
    if (local_20 != (__jmp_buf_tag *)0x0) {
      local_18 = png_create_info_struct();
      if (local_18 == 0) {
        fclose(__stream);
        png_destroy_write_struct(&local_20,0);
        goto LAB_0530bda0;
      }
      iVar1 = setjmp(local_20);
      if (iVar1 == 0) {
        TravelLogBonusUI::SetTask((TravelLogBonusUI *)local_20,(TravelLogTask *)__stream);
        local_28 = 8;
        local_27 = 8;
        local_26 = 8;
        local_24 = 8;
        png_set_sBIT(local_20,local_18,&local_28);
        png_set_IHDR(local_20,local_18,(long)*(int *)(param_2 + 8),(long)*(int *)(param_2 + 0xc),8,6
                     ,0,0,0);
        if (param_3 != 0) {
          png_set_pHYs(local_20,local_18,(long)((float)param_3 * 39.37008),
                       (long)((float)param_3 * 39.37008),1);
        }
        iVar1 = 0;
        png_write_info(local_20,local_18);
        if (0 < *(int *)(param_2 + 0xc)) {
          do {
            local_10 = *(long *)(param_2 + 0x10) + (long)(iVar1 * *(int *)(param_2 + 8)) * 4;
            png_write_rows(local_20,&local_10,1);
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(param_2 + 0xc));
        }
        png_write_end(local_20,local_18);
        png_destroy_write_struct(&local_20,&local_18);
        fclose(__stream);
        uVar2 = 1;
        goto LAB_0530bda4;
      }
      png_destroy_write_struct(&local_20,&local_18);
    }
    fclose(__stream);
  }
LAB_0530bda0:
  uVar2 = 0;
LAB_0530bda4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageLib::LoadPNGToTextureAlpha(PFILE*, int, int, unsigned char*, unsigned int) */

void ImageLib::LoadPNGToTextureAlpha
               (PFILE *param_1,int param_2,int param_3,uchar *param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  ColourFit *this;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  __jmp_buf_tag *local_30;
  long local_28;
  ulong local_20;
  ulong local_18;
  ColourFit *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = (__jmp_buf_tag *)png_create_read_struct("1.0.5",0,0,0);
  png_set_read_fn(local_30,param_1,FUN_0530b948);
  if (local_30 != (__jmp_buf_tag *)0x0) {
    local_28 = png_create_info_struct();
    if (local_28 == 0) {
      png_destroy_read_struct(&local_30,0,0);
    }
    else {
      iVar1 = setjmp(local_30);
      if (iVar1 == 0) {
        uVar5 = 0;
        png_read_info(local_30,local_28);
        png_get_IHDR(local_30,local_28,&local_20,&local_18,auStack_3c,auStack_38,auStack_34,0,0);
        png_set_tRNS_to_alpha(local_30);
        png_set_filler(local_30,0xff,1);
        png_set_tRNS_to_alpha(local_30);
        png_set_gray_to_rgb(local_30);
        png_set_bgr(local_30);
        uVar2 = local_20 << 2;
        if (0x1fc0000000000000 < local_20) {
          uVar2 = 0xffffffffffffffff;
        }
        this = operator_new__(uVar2);
        local_10 = this;
        if (local_18 != 0) {
          do {
            png_read_rows(local_30,&local_10,0,1);
            lVar4 = 0;
            if (local_20 != 0) {
              do {
                param_4[lVar4] = (uchar)*(undefined4 *)(this + lVar4);
                lVar4 = lVar4 + 4;
              } while (lVar4 != local_20 * 4);
            }
            uVar5 = uVar5 + 1;
            param_4 = param_4 + param_5;
          } while (uVar5 < local_18);
        }
        EATextSquish::ColourFit::~ColourFit(this);
        png_read_end(local_30,local_28);
        png_destroy_read_struct(&local_30,&local_28,0);
        uVar3 = 1;
        goto LAB_0530c118;
      }
      png_destroy_read_struct(&local_30,&local_28,0);
    }
  }
  uVar3 = 0;
LAB_0530c118:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ImageLib::jpeg_pak_src(jpeg_decompress_struct*, PFILE*) */

void ImageLib::jpeg_pak_src(jpeg_decompress_struct *param_1,PFILE *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x50);
    *(long *)(param_1 + 0x28) = lVar1;
    uVar2 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x1000);
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
  }
  puVar3[2] = FUN_0530c224;
  puVar3[3] = FUN_0530c608;
  puVar3[4] = FUN_0530c6ac;
  puVar3[5] = jpeg_resync_to_restart;
  puVar3[7] = param_2;
  puVar3[1] = 0;
  puVar3[6] = FUN_0530c234;
  *puVar3 = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageLib::GetJPEGImage(std::string const&, int) */

void ImageLib::GetJPEGImage(string *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  PFILE *pPVar3;
  Image *this;
  ErrorHandler aEStack_408 [168];
  __jmp_buf_tag _Stack_360;
  jpeg_compress_struct ajStack_260 [600];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0547429c();
  pPVar3 = (PFILE *)FUN_0530c718(uVar2,param_2);
  if (pPVar3 != (PFILE *)0x0) {
    this = ::operator_new(0x20);
    Image::Image(this);
    ErrorHandler::ErrorHandler(aEStack_408,ajStack_260);
    iVar1 = setjmp(&_Stack_360);
    if (iVar1 == 0) {
      jpeg_CreateDecompress((jpeg_decompress_struct *)ajStack_260,0x3e,600);
      jpeg_pak_src((jpeg_decompress_struct *)ajStack_260,pPVar3);
      FUN_0530c334(this,(jpeg_decompress_struct *)ajStack_260);
      jpeg_destroy_compress((jpeg_decompress_struct *)ajStack_260);
      FUN_0530c4a8(pPVar3);
      goto LAB_0530c978;
    }
    jpeg_destroy_compress(ajStack_260);
    (**(code **)(*(long *)this + 8))();
    FUN_0530c4a8(pPVar3);
  }
  this = (Image *)0x0;
LAB_0530c978:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageLib::GetJPEGImage(Sexy::Buffer const*) */

void ImageLib::GetJPEGImage(Buffer *param_1)

{
  int iVar1;
  Image *this;
  BufferSource aBStack_410 [8];
  ErrorHandler aEStack_408 [168];
  __jmp_buf_tag _Stack_360;
  jpeg_compress_struct ajStack_260 [600];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = ::operator_new(0x20);
  Image::Image(this);
  ErrorHandler::ErrorHandler(aEStack_408,ajStack_260);
  iVar1 = setjmp(&_Stack_360);
  if (iVar1 == 0) {
    jpeg_CreateDecompress((jpeg_decompress_struct *)ajStack_260,0x3e,600);
    BufferSource::BufferSource(aBStack_410,param_1,(jpeg_decompress_struct *)ajStack_260);
    FUN_0530c334(this,(jpeg_decompress_struct *)ajStack_260);
    jpeg_destroy_compress((jpeg_decompress_struct *)ajStack_260);
  }
  else {
    jpeg_destroy_compress(ajStack_260);
    (**(code **)(*(long *)this + 8))();
    this = (Image *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageLib::SetJpegTable(jpeg_compress_struct*, int, unsigned char const (*) [64], int) */

void ImageLib::SetJpegTable
               (jpeg_compress_struct *param_1,int param_2,unsigned_char *param_3,int param_4)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  int local_10 [2];
  long local_8;
  int iVar3;
  
  local_8 = ___stack_chk_guard;
  if (param_4 < 0) {
    uVar11 = 0;
    uVar9 = 0x40;
    iVar12 = 100;
    iVar10 = 0;
    param_4 = 0;
  }
  else if (param_4 < 0x65) {
    uVar1 = param_4 / 10 + 1;
    uVar11 = (ulong)(uint)(param_4 / 10);
    uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar1 << 6;
    iVar10 = (param_4 % 10) * 10;
    iVar12 = (param_4 % 10) * -10 + 100;
  }
  else {
    iVar12 = 100;
    uVar9 = 0x2c0;
    uVar11 = 10;
    iVar10 = 0;
    param_4 = 100;
  }
  if (*(int *)(param_1 + 0x24) != 100) {
    lVar7 = *(long *)param_1;
    *(int *)(lVar7 + 0x2c) = *(int *)(param_1 + 0x24);
    *(undefined4 *)(lVar7 + 0x28) = 0x14;
    (*(code *)**(undefined8 **)param_1)(param_1);
  }
  if (3 < (uint)param_2) {
    lVar7 = *(long *)param_1;
    *(int *)(lVar7 + 0x2c) = param_2;
    *(undefined4 *)(lVar7 + 0x28) = 0x1f;
    (*(code *)**(undefined8 **)param_1)(param_1);
  }
  lVar7 = *(long *)(param_1 + (long)param_2 * 8 + 0x60);
  if (lVar7 == 0) {
    lVar7 = jpeg_alloc_quant_table(param_1);
    *(long *)(param_1 + (long)param_2 * 8 + 0x60) = lVar7;
  }
  if (param_4 < 0x33) {
    uVar6 = uVar9;
    uVar9 = -(uVar11 >> 0x1f) & 0xffffffc000000000 | uVar11 << 6;
  }
  else {
    local_10[0] = (int)uVar11 + 2;
    local_10[1] = 0xb;
    piVar5 = eastl::max_alt<int>(local_10,local_10 + 1);
    uVar6 = (long)*piVar5 << 6;
  }
  lVar8 = 0;
  do {
    iVar4 = (int)((uint)(byte)param_3[lVar8 + uVar6] * iVar10 +
                 (uint)(byte)param_3[lVar8 + uVar9] * iVar12) / 100;
    iVar3 = iVar4;
    if (0xff < iVar4 || iVar4 == 0) {
      iVar3 = 1;
    }
    uVar2 = (undefined2)iVar3;
    if (0xff < iVar4) {
      uVar2 = 0xff;
    }
    *(undefined2 *)(lVar7 + lVar8 * 2) = uVar2;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x40);
  *(undefined1 *)(lVar7 + 0x80) = 0;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageLib::WriteJPEGImage(std::string const&, ImageLib::Image*, int) */

void ImageLib::WriteJPEGImage(string *param_1,Image *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *__filename;
  FILE *__stream;
  undefined8 uVar3;
  ColourFit *pCVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ColourFit *local_9b0;
  ErrorHandler aEStack_9a8 [168];
  __jmp_buf_tag _Stack_900;
  jpeg_compress_struct ajStack_800 [48];
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined4 local_7c8;
  undefined4 local_7c4;
  long local_7a8;
  undefined1 local_6fe;
  unsigned_char local_608;
  undefined1 local_607;
  undefined1 local_606;
  undefined1 local_605;
  undefined1 local_604;
  undefined1 local_603;
  undefined1 local_602;
  undefined1 local_601;
  undefined1 local_600;
  undefined1 local_5ff;
  undefined1 local_5fe;
  undefined1 local_5fd;
  undefined1 local_5fc;
  undefined1 local_5fb;
  undefined1 local_5fa;
  undefined1 local_5f9;
  undefined1 local_5f8;
  undefined1 local_5f7;
  undefined1 local_5f6;
  undefined1 local_5f5;
  undefined1 local_5f4;
  undefined1 local_5f3;
  undefined1 local_5f2;
  undefined1 local_5f1;
  undefined1 local_5f0;
  undefined1 local_5ef;
  undefined1 local_5ee;
  undefined1 local_5ed;
  undefined1 local_5ec;
  undefined1 local_5eb;
  undefined1 local_5ea;
  undefined1 local_5e9;
  undefined1 local_5e8;
  undefined1 local_5e7;
  undefined1 local_5e6;
  undefined1 local_5e5;
  undefined1 local_5e4;
  undefined1 local_5e3;
  undefined1 local_5e2;
  undefined1 local_5e1;
  undefined1 local_5e0;
  undefined1 local_5df;
  undefined1 local_5de;
  undefined1 local_5dd;
  undefined1 local_5dc;
  undefined1 local_5db;
  undefined1 local_5da;
  undefined1 local_5d9;
  undefined1 local_5d8;
  undefined1 local_5d7;
  undefined1 local_5d6;
  undefined1 local_5d5;
  undefined1 local_5d4;
  undefined1 local_5d3;
  undefined1 local_5d2;
  undefined1 local_5d1;
  undefined1 local_5d0;
  undefined1 local_5cf;
  undefined1 local_5ce;
  undefined1 local_5cd;
  undefined1 local_5cc;
  undefined1 local_5cb;
  undefined1 local_5ca;
  undefined1 local_5c9;
  undefined1 local_5c8;
  undefined1 local_5c7;
  undefined1 local_5c6;
  undefined1 local_5c5;
  undefined1 local_5c4;
  undefined1 local_5c3;
  undefined1 local_5c2;
  undefined1 local_5c1;
  undefined1 local_5c0;
  undefined1 local_5bf;
  undefined1 local_5be;
  undefined1 local_5bd;
  undefined1 local_5bc;
  undefined1 local_5bb;
  undefined1 local_5ba;
  undefined1 local_5b9;
  undefined1 local_5b8;
  undefined1 local_5b7;
  undefined1 local_5b6;
  undefined1 local_5b5;
  undefined1 local_5b4;
  undefined1 local_5b3;
  undefined1 local_5b2;
  undefined1 local_5b1;
  undefined1 local_5b0;
  undefined1 local_5af;
  undefined1 local_5ae;
  undefined1 local_5ad;
  undefined1 local_5ac;
  undefined1 local_5ab;
  undefined1 local_5aa;
  undefined1 local_5a9;
  undefined1 local_5a8;
  undefined1 local_5a7;
  undefined1 local_5a6;
  undefined1 local_5a5;
  undefined1 local_5a4;
  undefined1 local_5a3;
  undefined1 local_5a2;
  undefined1 local_5a1;
  undefined1 local_5a0;
  undefined1 local_59f;
  undefined1 local_59e;
  undefined1 local_59d;
  undefined1 local_59c;
  undefined1 local_59b;
  undefined1 local_59a;
  undefined1 local_599;
  undefined1 local_598;
  undefined1 local_597;
  undefined1 local_596;
  undefined1 local_595;
  undefined1 local_594;
  undefined1 local_593;
  undefined1 local_592;
  undefined1 local_591;
  undefined1 local_590;
  undefined1 local_58f;
  undefined1 local_58e;
  undefined1 local_58d;
  undefined1 local_58c;
  undefined1 local_58b;
  undefined1 local_58a;
  undefined1 local_589;
  undefined1 local_588;
  undefined1 local_587;
  undefined1 local_586;
  undefined1 local_585;
  undefined1 local_584;
  undefined1 local_583;
  undefined1 local_582;
  undefined1 local_581;
  undefined1 local_580;
  undefined1 local_57f;
  undefined1 local_57e;
  undefined1 local_57d;
  undefined1 local_57c;
  undefined1 local_57b;
  undefined1 local_57a;
  undefined1 local_579;
  undefined1 local_578;
  undefined1 local_577;
  undefined1 local_576;
  undefined1 local_575;
  undefined1 local_574;
  undefined1 local_573;
  undefined1 local_572;
  undefined1 local_571;
  undefined1 local_570;
  undefined1 local_56f;
  undefined1 local_56e;
  undefined1 local_56d;
  undefined1 local_56c;
  undefined1 local_56b;
  undefined1 local_56a;
  undefined1 local_569;
  undefined1 local_568;
  undefined1 local_567;
  undefined1 local_566;
  undefined1 local_565;
  undefined1 local_564;
  undefined1 local_563;
  undefined1 local_562;
  undefined1 local_561;
  undefined1 local_560;
  undefined1 local_55f;
  undefined1 local_55e;
  undefined1 local_55d;
  undefined1 local_55c;
  undefined1 local_55b;
  undefined1 local_55a;
  undefined1 local_559;
  undefined1 local_558;
  undefined1 local_557;
  undefined1 local_556;
  undefined1 local_555;
  undefined1 local_554;
  undefined1 local_553;
  undefined1 local_552;
  undefined1 local_551;
  undefined1 local_550;
  undefined1 local_54f;
  undefined1 local_54e;
  undefined1 local_54d;
  undefined1 local_54c;
  undefined1 local_54b;
  undefined1 local_54a;
  undefined1 local_549;
  undefined1 local_548;
  undefined1 local_547;
  undefined1 local_546;
  undefined1 local_545;
  undefined1 local_544;
  undefined1 local_543;
  undefined1 local_542;
  undefined1 local_541;
  undefined1 local_540;
  undefined1 local_53f;
  undefined1 local_53e;
  undefined1 local_53d;
  undefined1 local_53c;
  undefined1 local_53b;
  undefined1 local_53a;
  undefined1 local_539;
  undefined1 local_538;
  undefined1 local_537;
  undefined1 local_536;
  undefined1 local_535;
  undefined1 local_534;
  undefined1 local_533;
  undefined1 local_532;
  undefined1 local_531;
  undefined1 local_530;
  undefined1 local_52f;
  undefined1 local_52e;
  undefined1 local_52d;
  undefined1 local_52c;
  undefined1 local_52b;
  undefined1 local_52a;
  undefined1 local_529;
  undefined1 local_528;
  undefined1 local_527;
  undefined1 local_526;
  undefined1 local_525;
  undefined1 local_524;
  undefined1 local_523;
  undefined1 local_522;
  undefined1 local_521;
  undefined1 local_520;
  undefined1 local_51f;
  undefined1 local_51e;
  undefined1 local_51d;
  undefined1 local_51c;
  undefined1 local_51b;
  undefined1 local_51a;
  undefined1 local_519;
  undefined1 local_518;
  undefined1 local_517;
  undefined1 local_516;
  undefined1 local_515;
  undefined1 local_514;
  undefined1 local_513;
  undefined1 local_512;
  undefined1 local_511;
  undefined1 local_510;
  undefined1 local_50f;
  undefined1 local_50e;
  undefined1 local_50d;
  undefined1 local_50c;
  undefined1 local_50b;
  undefined1 local_50a;
  undefined1 local_509;
  undefined1 local_508;
  undefined1 local_507;
  undefined1 local_506;
  undefined1 local_505;
  undefined1 local_504;
  undefined1 local_503;
  undefined1 local_502;
  undefined1 local_501;
  undefined1 local_500;
  undefined1 local_4ff;
  undefined1 local_4fe;
  undefined1 local_4fd;
  undefined1 local_4fc;
  undefined1 local_4fb;
  undefined1 local_4fa;
  undefined1 local_4f9;
  undefined1 local_4f8;
  undefined1 local_4f7;
  undefined1 local_4f6;
  undefined1 local_4f5;
  undefined1 local_4f4;
  undefined1 local_4f3;
  undefined1 local_4f2;
  undefined1 local_4f1;
  undefined1 local_4f0;
  undefined1 local_4ef;
  undefined1 local_4ee;
  undefined1 local_4ed;
  undefined1 local_4ec;
  undefined1 local_4eb;
  undefined1 local_4ea;
  undefined1 local_4e9;
  undefined1 local_4e8;
  undefined1 local_4e7;
  undefined1 local_4e6;
  undefined1 local_4e5;
  undefined1 local_4e4;
  undefined1 local_4e3;
  undefined1 local_4e2;
  undefined1 local_4e1;
  undefined1 local_4e0;
  undefined1 local_4df;
  undefined1 local_4de;
  undefined1 local_4dd;
  undefined1 local_4dc;
  undefined1 local_4db;
  undefined1 local_4da;
  undefined1 local_4d9;
  undefined1 local_4d8;
  undefined1 local_4d7;
  undefined1 local_4d6;
  undefined1 local_4d5;
  undefined1 local_4d4;
  undefined1 local_4d3;
  undefined1 local_4d2;
  undefined1 local_4d1;
  undefined1 local_4d0;
  undefined1 local_4cf;
  undefined1 local_4ce;
  undefined1 local_4cd;
  undefined1 local_4cc;
  undefined1 local_4cb;
  undefined1 local_4ca;
  undefined1 local_4c9;
  undefined1 local_4c8;
  undefined1 local_4c7;
  undefined1 local_4c6;
  undefined1 local_4c5;
  undefined1 local_4c4;
  undefined1 local_4c3;
  undefined1 local_4c2;
  undefined1 local_4c1;
  undefined1 local_4c0;
  undefined1 local_4bf;
  undefined1 local_4be;
  undefined1 local_4bd;
  undefined1 local_4bc;
  undefined1 local_4bb;
  undefined1 local_4ba;
  undefined1 local_4b9;
  undefined1 local_4b8;
  undefined1 local_4b7;
  undefined1 local_4b6;
  undefined1 local_4b5;
  undefined1 local_4b4;
  undefined1 local_4b3;
  undefined1 local_4b2;
  undefined1 local_4b1;
  undefined1 local_4b0;
  undefined1 local_4af;
  undefined1 local_4ae;
  undefined1 local_4ad;
  undefined1 local_4ac;
  undefined1 local_4ab;
  undefined1 local_4aa;
  undefined1 local_4a9;
  undefined1 local_4a8;
  undefined1 local_4a7;
  undefined1 local_4a6;
  undefined1 local_4a5;
  undefined1 local_4a4;
  undefined1 local_4a3;
  undefined1 local_4a2;
  undefined1 local_4a1;
  undefined1 local_4a0;
  undefined1 local_49f;
  undefined1 local_49e;
  undefined1 local_49d;
  undefined1 local_49c;
  undefined1 local_49b;
  undefined1 local_49a;
  undefined1 local_499;
  undefined1 local_498;
  undefined1 local_497;
  undefined1 local_496;
  undefined1 local_495;
  undefined1 local_494;
  undefined1 local_493;
  undefined1 local_492;
  undefined1 local_491;
  undefined1 local_490;
  undefined1 local_48f;
  undefined1 local_48e;
  undefined1 local_48d;
  undefined1 local_48c;
  undefined1 local_48b;
  undefined1 local_48a;
  undefined1 local_488;
  undefined1 local_487;
  undefined1 local_486;
  undefined1 local_485;
  undefined1 local_484;
  undefined1 local_483;
  undefined1 local_482;
  undefined1 local_481;
  undefined1 local_480;
  undefined1 local_47f;
  undefined1 local_47e;
  undefined1 local_47d;
  undefined1 local_47c;
  undefined1 local_47b;
  undefined1 local_47a;
  undefined1 local_479;
  undefined1 local_478;
  undefined1 local_477;
  undefined1 local_476;
  undefined1 local_475;
  undefined1 local_474;
  undefined1 local_473;
  undefined1 local_472;
  undefined1 local_471;
  undefined1 local_470;
  undefined1 local_46f;
  undefined1 local_46e;
  undefined1 local_46d;
  undefined1 local_46c;
  undefined1 local_46b;
  undefined1 local_46a;
  undefined1 local_469;
  undefined1 local_468;
  undefined1 local_467;
  undefined1 local_466;
  undefined1 local_465;
  undefined1 local_464;
  undefined1 local_463;
  undefined1 local_462;
  undefined1 local_461;
  undefined1 local_460;
  undefined1 local_45f;
  undefined1 local_45e;
  undefined1 local_45d;
  undefined1 local_45c;
  undefined1 local_45b;
  undefined1 local_45a;
  undefined1 local_459;
  undefined1 local_458;
  undefined1 local_457;
  undefined1 local_456;
  undefined1 local_455;
  undefined1 local_454;
  undefined1 local_453;
  undefined1 local_452;
  undefined1 local_451;
  undefined1 local_450;
  undefined1 local_44f;
  undefined1 local_44e;
  undefined1 local_44d;
  undefined1 local_44c;
  undefined1 local_44b;
  undefined1 local_44a;
  undefined1 local_448;
  undefined1 local_447;
  undefined1 local_446;
  undefined1 local_445;
  undefined1 local_444;
  undefined1 local_443;
  undefined1 local_442;
  undefined1 local_441;
  undefined1 local_440;
  undefined1 local_43f;
  undefined1 local_43e;
  undefined1 local_43d;
  undefined1 local_43c;
  undefined1 local_43b;
  undefined1 local_43a;
  undefined1 local_439;
  undefined1 local_438;
  undefined1 local_437;
  undefined1 local_436;
  undefined1 local_435;
  undefined1 local_434;
  undefined1 local_433;
  undefined1 local_432;
  undefined1 local_431;
  undefined1 local_430;
  undefined1 local_42f;
  undefined1 local_42e;
  undefined1 local_42d;
  undefined1 local_42c;
  undefined1 local_42b;
  undefined1 local_42a;
  undefined1 local_429;
  undefined1 local_428;
  undefined1 local_427;
  undefined1 local_426;
  undefined1 local_425;
  undefined1 local_424;
  undefined1 local_423;
  undefined1 local_422;
  undefined1 local_421;
  undefined1 local_420;
  undefined1 local_41f;
  undefined1 local_41e;
  undefined1 local_41d;
  undefined1 local_41c;
  undefined1 local_41b;
  undefined1 local_41a;
  undefined1 local_419;
  undefined1 local_418;
  undefined1 local_417;
  undefined1 local_416;
  undefined1 local_415;
  undefined1 local_414;
  undefined1 local_413;
  undefined1 local_412;
  undefined1 local_411;
  undefined1 local_410;
  undefined1 local_40f;
  undefined1 local_40e;
  undefined1 local_40d;
  undefined1 local_40c;
  undefined1 local_40b;
  undefined1 local_40a;
  undefined1 local_409;
  undefined1 local_408;
  undefined1 local_407;
  undefined1 local_406;
  undefined1 local_405;
  undefined1 local_404;
  undefined1 local_403;
  undefined1 local_402;
  undefined1 local_401;
  undefined1 local_400;
  undefined1 local_3ff;
  undefined1 local_3fe;
  undefined1 local_3fd;
  undefined1 local_3fc;
  undefined1 local_3fb;
  undefined1 local_3fa;
  undefined1 local_3f9;
  undefined1 local_3f8;
  undefined1 local_3f7;
  undefined1 local_3f6;
  undefined1 local_3f5;
  undefined1 local_3f4;
  undefined1 local_3f3;
  undefined1 local_3f2;
  undefined1 local_3f1;
  undefined1 local_3f0;
  undefined1 local_3ef;
  undefined1 local_3ee;
  undefined1 local_3ed;
  undefined1 local_3ec;
  undefined1 local_3eb;
  undefined1 local_3ea;
  undefined1 local_3e9;
  undefined1 local_3e8;
  undefined1 local_3e7;
  undefined1 local_3e6;
  undefined1 local_3e5;
  undefined1 local_3e4;
  undefined1 local_3e3;
  undefined1 local_3e2;
  undefined1 local_3e1;
  undefined1 local_3e0;
  undefined1 local_3df;
  undefined1 local_3de;
  undefined1 local_3dd;
  undefined1 local_3dc;
  undefined1 local_3db;
  undefined1 local_3da;
  undefined1 local_3d9;
  undefined1 local_3d8;
  undefined1 local_3d7;
  undefined1 local_3d6;
  undefined1 local_3d5;
  undefined1 local_3d4;
  undefined1 local_3d3;
  undefined1 local_3d2;
  undefined1 local_3d1;
  undefined1 local_3d0;
  undefined1 local_3cf;
  undefined1 local_3ce;
  undefined1 local_3cd;
  undefined1 local_3cc;
  undefined1 local_3cb;
  undefined1 local_3ca;
  undefined1 local_3c9;
  undefined1 local_3c8;
  undefined1 local_3c7;
  undefined1 local_3c6;
  undefined1 local_3c5;
  undefined1 local_3c4;
  undefined1 local_3c3;
  undefined1 local_3c2;
  undefined1 local_3c1;
  undefined1 local_3c0;
  undefined1 local_3bf;
  undefined1 local_3be;
  undefined1 local_3bd;
  undefined1 local_3bc;
  undefined1 local_3bb;
  undefined1 local_3ba;
  undefined1 local_3b9;
  undefined1 local_3b8;
  undefined1 local_3b7;
  undefined1 local_3b6;
  undefined1 local_3b5;
  undefined1 local_3b4;
  undefined1 local_3b3;
  undefined1 local_3b2;
  undefined1 local_3b1;
  undefined1 local_3b0;
  undefined1 local_3af;
  undefined1 local_3ae;
  undefined1 local_3ad;
  undefined1 local_3ac;
  undefined1 local_3ab;
  undefined1 local_3aa;
  undefined1 local_3a9;
  undefined1 local_3a8;
  undefined1 local_3a7;
  undefined1 local_3a6;
  undefined1 local_3a5;
  undefined1 local_3a4;
  undefined1 local_3a3;
  undefined1 local_3a2;
  undefined1 local_3a1;
  undefined1 local_3a0;
  undefined1 local_39f;
  undefined1 local_39e;
  undefined1 local_39d;
  undefined1 local_39c;
  undefined1 local_39b;
  undefined1 local_39a;
  undefined1 local_399;
  undefined1 local_398;
  undefined1 local_397;
  undefined1 local_396;
  undefined1 local_395;
  undefined1 local_394;
  undefined1 local_393;
  undefined1 local_392;
  undefined1 local_391;
  undefined1 local_390;
  undefined1 local_38f;
  undefined1 local_38e;
  undefined1 local_38d;
  undefined1 local_38c;
  undefined1 local_38b;
  undefined1 local_38a;
  undefined1 local_389;
  undefined1 local_388;
  undefined1 local_387;
  undefined1 local_386;
  undefined1 local_385;
  undefined1 local_384;
  undefined1 local_383;
  undefined1 local_382;
  undefined1 local_381;
  undefined1 local_380;
  undefined1 local_37f;
  undefined1 local_37e;
  undefined1 local_37d;
  undefined1 local_37c;
  undefined1 local_37b;
  undefined1 local_37a;
  undefined1 local_379;
  undefined1 local_378;
  undefined1 local_377;
  undefined1 local_376;
  undefined1 local_375;
  undefined1 local_374;
  undefined1 local_373;
  undefined1 local_372;
  undefined1 local_371;
  undefined1 local_370;
  undefined1 local_36f;
  undefined1 local_36e;
  undefined1 local_36d;
  undefined1 local_36c;
  undefined1 local_36b;
  undefined1 local_36a;
  undefined1 local_369;
  undefined1 local_368;
  undefined1 local_367;
  undefined1 local_366;
  undefined1 local_365;
  undefined1 local_364;
  undefined1 local_363;
  undefined1 local_362;
  undefined1 local_361;
  undefined1 local_360;
  undefined1 local_35f;
  undefined1 local_35e;
  undefined1 local_35d;
  undefined1 local_35c;
  undefined1 local_35b;
  undefined1 local_35a;
  undefined1 local_359;
  undefined1 local_358;
  undefined1 local_357;
  undefined1 local_356;
  undefined1 local_355;
  undefined1 local_354;
  undefined1 local_353;
  undefined1 local_352;
  undefined1 local_351;
  undefined1 local_350;
  undefined1 local_34f;
  undefined1 local_34e;
  undefined1 local_34d;
  undefined1 local_34c;
  undefined1 local_34b;
  undefined1 local_34a;
  undefined1 local_349;
  undefined1 local_348;
  undefined1 local_347;
  undefined1 local_346;
  undefined1 local_345;
  undefined1 local_344;
  undefined1 local_343;
  undefined1 local_342;
  undefined1 local_341;
  undefined1 local_340;
  undefined1 local_33f;
  undefined1 local_33e;
  undefined1 local_33d;
  undefined1 local_33c;
  undefined1 local_33b;
  undefined1 local_33a;
  undefined1 local_339;
  undefined1 local_338;
  undefined1 local_337;
  undefined1 local_336;
  undefined1 local_335;
  undefined1 local_334;
  undefined1 local_333;
  undefined1 local_332;
  undefined1 local_331;
  undefined1 local_330;
  undefined1 local_32f;
  undefined1 local_32e;
  undefined1 local_32d;
  undefined1 local_32c;
  undefined1 local_32b;
  undefined1 local_32a;
  undefined1 local_329;
  undefined1 local_328;
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324;
  undefined1 local_323;
  undefined1 local_322;
  undefined1 local_321;
  undefined1 local_320;
  undefined1 local_31f;
  undefined1 local_31e;
  undefined1 local_31d;
  undefined1 local_31c;
  undefined1 local_31b;
  undefined1 local_31a;
  undefined1 local_319;
  undefined1 local_318;
  undefined1 local_317;
  undefined1 local_316;
  undefined1 local_315;
  undefined1 local_314;
  undefined1 local_313;
  undefined1 local_312;
  undefined1 local_311;
  undefined1 local_310;
  undefined1 local_30f;
  undefined1 local_30e;
  undefined1 local_30d;
  undefined1 local_30c;
  undefined1 local_30b;
  undefined1 local_30a;
  undefined1 local_309;
  unsigned_char auStack_308 [768];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  memset(&local_608,0,0x300);
  local_608 = (unsigned_char)0x14;
  local_607 = 0x10;
  local_606 = 0x19;
  local_605 = 0x27;
  local_604 = 0x32;
  local_603 = 0x2e;
  local_602 = 0x3e;
  local_600 = 0x10;
  local_5ff = 0x12;
  local_5fe = 0x17;
  local_5fd = 0x26;
  local_5fc = 0x26;
  local_5fa = 0x41;
  local_5f8 = 0x19;
  local_5f7 = 0x17;
  local_5f5 = 0x26;
  local_5f3 = 0x41;
  local_5f0 = 0x27;
  local_5ef = 0x26;
  local_5ee = 0x26;
  local_5ec = 0x41;
  local_5e8 = 0x32;
  local_601 = 0x44;
  local_5f9 = 0x44;
  local_5f2 = 0x44;
  local_5f1 = 0x44;
  local_5eb = 0x44;
  local_5ea = 0x44;
  local_5e9 = 0x44;
  local_5fb = 0x35;
  local_5f6 = 0x1f;
  local_5f4 = 0x35;
  local_5ed = 0x35;
  local_5e7 = 0x26;
  local_5e5 = 0x41;
  local_5e0 = 0x2e;
  local_5de = 0x41;
  local_5d8 = 0x3e;
  local_5d7 = 0x41;
  local_5c8 = 0x14;
  local_5c7 = 0x10;
  local_5c6 = 0x19;
  local_5e4 = 0x44;
  local_5e3 = 0x44;
  local_5e2 = 0x44;
  local_5e1 = 0x44;
  local_5dd = 0x44;
  local_5dc = 0x44;
  local_5db = 0x44;
  local_5da = 0x44;
  local_5d9 = 0x44;
  local_5d6 = 0x44;
  local_5d5 = 0x44;
  local_5d4 = 0x44;
  local_5d3 = 0x44;
  local_5d2 = 0x44;
  local_5d1 = 0x44;
  local_5d0 = 0x44;
  local_5cf = 0x44;
  local_5ce = 0x44;
  local_5cd = 0x44;
  local_5cc = 0x44;
  local_5cb = 0x44;
  local_5ca = 0x44;
  local_5c9 = 0x44;
  local_5e6 = 0x35;
  local_5df = 0x35;
  local_5c5 = 0x27;
  local_5c4 = 0x32;
  local_5c3 = 0x2e;
  local_5c2 = 0x3e;
  local_5c0 = 0x10;
  local_5bf = 0x12;
  local_5be = 0x17;
  local_5bd = 0x26;
  local_5bc = 0x26;
  local_5ba = 0x41;
  local_5b8 = 0x19;
  local_5b7 = 0x17;
  local_5b5 = 0x26;
  local_5b3 = 0x41;
  local_5b0 = 0x27;
  local_5af = 0x26;
  local_5ae = 0x26;
  local_5ac = 0x41;
  local_5a8 = 0x32;
  local_5a7 = 0x26;
  local_5a5 = 0x41;
  local_5c1 = 0x44;
  local_5b9 = 0x44;
  local_5b2 = 0x44;
  local_5b1 = 0x44;
  local_5ab = 0x44;
  local_5aa = 0x44;
  local_5a9 = 0x44;
  local_5a4 = 0x44;
  local_5bb = 0x35;
  local_5b6 = 0x1f;
  local_5b4 = 0x35;
  local_5ad = 0x35;
  local_5a6 = 0x35;
  local_5a3 = 0x44;
  local_5a0 = 0x2e;
  local_59e = 0x41;
  local_598 = 0x3e;
  local_597 = 0x41;
  local_588 = 0x12;
  local_587 = 0xe;
  local_586 = 0xe;
  local_585 = 0x15;
  local_584 = 0x1e;
  local_583 = 0x23;
  local_582 = 0x22;
  local_5a2 = 0x44;
  local_5a1 = 0x44;
  local_59d = 0x44;
  local_59c = 0x44;
  local_59b = 0x44;
  local_59a = 0x44;
  local_599 = 0x44;
  local_596 = 0x44;
  local_595 = 0x44;
  local_594 = 0x44;
  local_593 = 0x44;
  local_592 = 0x44;
  local_591 = 0x44;
  local_590 = 0x44;
  local_58f = 0x44;
  local_58e = 0x44;
  local_58d = 0x44;
  local_58c = 0x44;
  local_58b = 0x44;
  local_58a = 0x44;
  local_589 = 0x44;
  local_59f = 0x35;
  local_581 = 0x27;
  local_580 = 0xe;
  local_57f = 0x10;
  local_57e = 0x10;
  local_57c = 0x1a;
  local_57a = 0x1e;
  local_579 = 0x27;
  local_578 = 0xe;
  local_577 = 0x10;
  local_575 = 0x15;
  local_573 = 0x22;
  local_572 = 0x2e;
  local_571 = 0x3e;
  local_570 = 0x15;
  local_56e = 0x15;
  local_56d = 0x1a;
  local_56c = 0x21;
  local_56b = 0x30;
  local_56a = 0x3e;
  local_569 = 0x41;
  local_568 = 0x1e;
  local_567 = 0x1a;
  local_565 = 0x21;
  local_564 = 0x33;
  local_563 = 0x41;
  local_562 = 0x41;
  local_561 = 0x41;
  local_560 = 0x23;
  local_57d = 0x13;
  local_57b = 0x18;
  local_576 = 0x11;
  local_574 = 0x18;
  local_56f = 0x13;
  local_566 = 0x18;
  local_55f = 0x18;
  local_55e = 0x22;
  local_55d = 0x30;
  local_55c = 0x41;
  local_55b = 0x41;
  local_55a = 0x41;
  local_559 = 0x41;
  local_558 = 0x22;
  local_557 = 0x1e;
  local_556 = 0x2e;
  local_555 = 0x3e;
  local_554 = 0x41;
  local_553 = 0x41;
  local_552 = 0x41;
  local_551 = 0x41;
  local_550 = 0x27;
  local_54f = 0x27;
  local_54e = 0x3e;
  local_54d = 0x41;
  local_54c = 0x41;
  local_54b = 0x41;
  local_54a = 0x41;
  local_549 = 0x41;
  local_548 = 0x10;
  local_547 = 0xb;
  local_546 = 0xb;
  local_545 = 0x10;
  local_544 = 0x17;
  local_543 = 0x1b;
  local_541 = 0x1e;
  local_540 = 0xb;
  local_53f = 0xc;
  local_53e = 0xc;
  local_542 = 0x1f;
  local_53d = 0xf;
  local_53c = 0x14;
  local_53b = 0x17;
  local_53a = 0x17;
  local_539 = 0x1e;
  local_538 = 0xb;
  local_535 = 0x10;
  local_534 = 0x17;
  local_533 = 0x1a;
  local_532 = 0x23;
  local_531 = 0x2f;
  local_530 = 0x10;
  local_52f = 0xf;
  local_52e = 0x10;
  local_52d = 0x17;
  local_52c = 0x1a;
  local_52b = 0x25;
  local_52a = 0x2f;
  local_528 = 0x17;
  local_527 = 0x14;
  local_526 = 0x17;
  local_525 = 0x1a;
  local_524 = 0x27;
  local_523 = 0x33;
  local_520 = 0x1b;
  local_51f = 0x17;
  local_51e = 0x1a;
  local_51d = 0x25;
  local_51c = 0x33;
  local_537 = 0xc;
  local_536 = 0xd;
  local_529 = 0x40;
  local_522 = 0x40;
  local_521 = 0x40;
  local_51b = 0x40;
  local_517 = 0x17;
  local_516 = 0x23;
  local_515 = 0x2f;
  local_510 = 0x1e;
  local_50f = 0x1e;
  local_50e = 0x2f;
  local_503 = 0x15;
  local_501 = 0x17;
  local_4fd = 0xb;
  local_4fc = 0xf;
  local_4fa = 0x12;
  local_508 = 0xc;
  local_507 = 8;
  local_506 = 8;
  local_505 = 0xc;
  local_500 = 8;
  local_51a = 0x40;
  local_519 = 0x40;
  local_518 = 0x1f;
  local_514 = 0x40;
  local_513 = 0x40;
  local_512 = 0x40;
  local_511 = 0x40;
  local_50d = 0x40;
  local_50c = 0x40;
  local_50b = 0x40;
  local_50a = 0x40;
  local_509 = 0x40;
  local_504 = 0x11;
  local_502 = 0x18;
  local_4ff = 9;
  local_4fe = 9;
  local_4fb = 0x13;
  local_4f9 = 0x17;
  local_4f6 = 10;
  local_4f3 = 0x14;
  local_4f2 = 0x1b;
  local_4f1 = 0x24;
  local_4ef = 0xb;
  local_4ed = 0x15;
  local_4ec = 0x14;
  local_4eb = 0x1c;
  local_4ea = 0x24;
  local_4e7 = 0xf;
  local_4e5 = 0x14;
  local_4e4 = 0x1e;
  local_4e3 = 0x27;
  local_4e2 = 0x33;
  local_4e1 = 0x3b;
  local_4e0 = 0x15;
  local_4de = 0x14;
  local_4dd = 0x1c;
  local_4dc = 0x27;
  local_4db = 0x33;
  local_4da = 0x3b;
  local_4d9 = 0x3b;
  local_4f8 = 8;
  local_4f5 = 0xc;
  local_4f0 = 0xc;
  local_4ee = 0xc;
  local_4f7 = 9;
  local_4f4 = 0x13;
  local_4e9 = 0x35;
  local_4e8 = 0x11;
  local_4e6 = 0x13;
  local_4df = 0x13;
  local_4d8 = 0x18;
  local_4d7 = 0x12;
  local_4d6 = 0x1b;
  local_4d5 = 0x24;
  local_4d4 = 0x33;
  local_4d3 = 0x3b;
  local_4d2 = 0x3b;
  local_4d1 = 0x3b;
  local_4d0 = 0x17;
  local_4cf = 0x17;
  local_4ce = 0x24;
  local_4cc = 0x3b;
  local_4cb = 0x3b;
  local_4ca = 0x3b;
  local_4c9 = 0x3b;
  local_4c7 = 6;
  local_4c6 = 6;
  local_4c3 = 0xe;
  local_4c2 = 0x10;
  local_4c0 = 6;
  local_4bf = 6;
  local_4be = 6;
  local_4bc = 10;
  local_4b9 = 0xf;
  local_4b8 = 6;
  local_4b7 = 6;
  local_4c8 = 8;
  local_4c5 = 8;
  local_4c4 = 0xc;
  local_4bd = 8;
  local_4ba = 0xc;
  local_4cd = 0x35;
  local_4c1 = 0x11;
  local_4bb = 0xd;
  local_4b6 = 7;
  local_4b5 = 8;
  local_4b3 = 0xe;
  local_4b2 = 0x12;
  local_4ad = 0xe;
  local_4a9 = 0x23;
  local_4a7 = 10;
  local_4a4 = 0x14;
  local_4a3 = 0x1a;
  local_4a2 = 0x22;
  local_4a1 = 0xe;
  local_49f = 0xe;
  local_49d = 0x1a;
  local_49c = 0x22;
  local_49b = 0x27;
  local_49a = 0x27;
  local_499 = 0x10;
  local_497 = 0x12;
  local_495 = 0x22;
  local_494 = 0x27;
  local_4b0 = 8;
  local_4af = 8;
  local_4ae = 8;
  local_4a8 = 0xc;
  local_498 = 0xc;
  local_4b4 = 0xd;
  local_4b1 = 0x18;
  local_4ac = 0xd;
  local_4ab = 0x13;
  local_4aa = 0x18;
  local_4a6 = 0xd;
  local_4a5 = 0xd;
  local_4a0 = 0xd;
  local_49e = 0x13;
  local_496 = 0x18;
  local_493 = 0x27;
  local_492 = 0x27;
  local_490 = 0xf;
  local_48e = 0x23;
  local_48d = 0x27;
  local_48c = 0x27;
  local_48b = 0x27;
  local_48a = 0x27;
  local_487 = 6;
  local_486 = 6;
  local_483 = 0xe;
  local_482 = 0x10;
  local_480 = 6;
  local_47f = 6;
  local_47e = 6;
  local_47c = 10;
  local_479 = 0xf;
  local_478 = 6;
  local_477 = 6;
  local_473 = 0xe;
  local_472 = 0x12;
  local_488 = 8;
  local_485 = 8;
  local_484 = 0xc;
  local_47d = 8;
  local_47a = 0xc;
  local_475 = 8;
  local_491 = 0x11;
  local_48f = 0x18;
  local_481 = 0x11;
  local_47b = 0xd;
  local_476 = 7;
  local_474 = 0xd;
  local_471 = 0x18;
  local_470 = 8;
  local_46d = 0xe;
  local_469 = 0x23;
  local_467 = 10;
  local_464 = 0x14;
  local_463 = 0x1a;
  local_462 = 0x22;
  local_461 = 0xe;
  local_45f = 0xe;
  local_45d = 0x1a;
  local_45c = 0x22;
  local_45b = 0x27;
  local_45a = 0x27;
  local_459 = 0x10;
  local_457 = 0x12;
  local_455 = 0x22;
  local_454 = 0x27;
  local_453 = 0x27;
  local_452 = 0x27;
  local_450 = 0xf;
  local_46f = 8;
  local_46e = 8;
  local_468 = 0xc;
  local_458 = 0xc;
  local_46c = 0xd;
  local_46b = 0x13;
  local_46a = 0x18;
  local_466 = 0xd;
  local_465 = 0xd;
  local_460 = 0xd;
  local_45e = 0x13;
  local_456 = 0x18;
  local_451 = 0x11;
  local_44f = 0x18;
  local_44e = 0x23;
  local_44d = 0x27;
  local_44c = 0x27;
  local_44b = 0x27;
  local_44a = 0x27;
  local_448 = 6;
  local_447 = 4;
  local_446 = 4;
  local_445 = 6;
  local_443 = 0xb;
  local_441 = 0x10;
  local_440 = 4;
  local_43f = 5;
  local_43e = 5;
  local_43d = 6;
  local_43b = 10;
  local_438 = 4;
  local_437 = 5;
  local_436 = 5;
  local_435 = 6;
  local_434 = 10;
  local_432 = 0xe;
  local_430 = 6;
  local_42f = 6;
  local_42e = 6;
  local_42d = 0xb;
  local_442 = 0xc;
  local_43c = 8;
  local_43a = 0xc;
  local_439 = 0xc;
  local_433 = 0xc;
  local_42c = 0xc;
  local_444 = 9;
  local_431 = 0x13;
  local_42b = 0xf;
  local_429 = 0x1c;
  local_426 = 10;
  local_424 = 0x10;
  local_423 = 0x14;
  local_422 = 0x1b;
  local_420 = 0xb;
  local_41f = 10;
  local_41d = 0xf;
  local_41c = 0x14;
  local_41b = 0x1b;
  local_416 = 0xe;
  local_414 = 0x1b;
  local_410 = 0x10;
  local_40d = 0x1c;
  local_427 = 8;
  local_425 = 0xc;
  local_41e = 0xc;
  local_418 = 0xc;
  local_417 = 0xc;
  local_40f = 0xc;
  local_42a = 0x13;
  local_428 = 9;
  local_421 = 0x1f;
  local_41a = 0x1f;
  local_419 = 0x1f;
  local_415 = 0x13;
  local_413 = 0x1f;
  local_412 = 0x1f;
  local_411 = 0x1f;
  local_40e = 0x13;
  local_40c = 0x1f;
  local_40b = 0x1f;
  local_40a = 0x1f;
  local_409 = 0x1f;
  local_408 = 4;
  local_407 = 3;
  local_406 = 3;
  local_405 = 4;
  local_404 = 6;
  local_401 = 10;
  local_400 = 3;
  local_3ff = 3;
  local_3fe = 3;
  local_3fd = 4;
  local_3fc = 5;
  local_3fb = 6;
  local_3f9 = 10;
  local_3f8 = 3;
  local_3f7 = 3;
  local_3f6 = 3;
  local_3f5 = 4;
  local_3f4 = 6;
  local_3f0 = 4;
  local_3ef = 4;
  local_3ee = 4;
  local_3e8 = 6;
  local_402 = 8;
  local_3fa = 8;
  local_3f2 = 0xc;
  local_3f1 = 0xc;
  local_3eb = 0xc;
  local_3ea = 0xc;
  local_403 = 7;
  local_3f3 = 9;
  local_3ed = 7;
  local_3ec = 9;
  local_3e9 = 0x11;
  local_3e7 = 5;
  local_3e6 = 6;
  local_3e1 = 0x14;
  local_3df = 6;
  local_3da = 0x14;
  local_3d9 = 0x14;
  local_3d3 = 0x14;
  local_3d2 = 0x14;
  local_3d1 = 0x14;
  local_3d0 = 10;
  local_3cf = 10;
  local_3cc = 0x14;
  local_3cb = 0x14;
  local_3ca = 0x14;
  local_3c9 = 0x14;
  local_3e4 = 0xc;
  local_3dd = 0xc;
  local_3d8 = 8;
  local_3d7 = 8;
  local_3d6 = 0xc;
  local_3d5 = 0xc;
  local_3ce = 0xc;
  local_3c8 = 2;
  local_3c7 = 2;
  local_3c6 = 2;
  local_3e5 = 9;
  local_3e3 = 0xd;
  local_3e2 = 0x11;
  local_3e0 = 7;
  local_3de = 9;
  local_3dc = 0xd;
  local_3db = 0x11;
  local_3d4 = 0x11;
  local_3cd = 0x11;
  local_3c5 = 2;
  local_3c4 = 3;
  local_3c3 = 4;
  local_3c2 = 5;
  local_3c1 = 6;
  local_3bc = 3;
  local_3bb = 4;
  local_3ba = 5;
  local_3b9 = 6;
  local_3b4 = 4;
  local_3b3 = 5;
  local_3ad = 4;
  local_3ac = 5;
  local_3a8 = 3;
  local_3a7 = 3;
  local_3a6 = 4;
  local_3a5 = 5;
  local_3c0 = 2;
  local_3bf = 2;
  local_3be = 2;
  local_3bd = 2;
  local_3b8 = 2;
  local_3b7 = 2;
  local_3b6 = 2;
  local_3b5 = 2;
  local_3b0 = 2;
  local_3af = 2;
  local_3ae = 2;
  local_3a9 = 0xc;
  local_3a4 = 8;
  local_3b2 = 7;
  local_3b1 = 9;
  local_3ab = 7;
  local_3aa = 9;
  local_3a3 = 10;
  local_3a0 = 4;
  local_39f = 4;
  local_39e = 5;
  local_39c = 10;
  local_398 = 5;
  local_397 = 5;
  local_390 = 6;
  local_38f = 6;
  local_3a2 = 0xc;
  local_3a1 = 1;
  local_39b = 0xc;
  local_39a = 0xc;
  local_399 = 0xc;
  local_394 = 0xc;
  local_393 = 0xc;
  local_392 = 0xc;
  local_391 = 0xc;
  local_38d = 0xc;
  local_38c = 0xc;
  local_38b = 0xc;
  local_38a = 0xc;
  local_389 = 0xc;
  local_388 = 1;
  local_387 = 1;
  local_386 = 1;
  local_385 = 1;
  local_384 = 2;
  local_383 = 2;
  local_382 = 2;
  local_39d = 7;
  local_396 = 7;
  local_395 = 9;
  local_38e = 9;
  local_381 = 3;
  local_379 = 3;
  local_373 = 3;
  local_372 = 4;
  local_371 = 5;
  local_36c = 3;
  local_36b = 4;
  local_36a = 5;
  local_365 = 3;
  local_364 = 4;
  local_363 = 5;
  local_380 = 1;
  local_37f = 1;
  local_37e = 1;
  local_37d = 1;
  local_37c = 2;
  local_37b = 2;
  local_37a = 2;
  local_378 = 1;
  local_377 = 1;
  local_376 = 1;
  local_375 = 1;
  local_374 = 2;
  local_370 = 1;
  local_36f = 1;
  local_36e = 1;
  local_36d = 2;
  local_368 = 2;
  local_367 = 2;
  local_366 = 2;
  local_361 = 8;
  local_360 = 2;
  local_369 = 7;
  local_362 = 7;
  local_35f = 2;
  local_35e = 3;
  local_35d = 4;
  local_35c = 5;
  local_356 = 4;
  local_355 = 5;
  local_350 = 3;
  local_34f = 3;
  local_34e = 5;
  local_35a = 8;
  local_359 = 8;
  local_358 = 2;
  local_357 = 2;
  local_353 = 8;
  local_352 = 8;
  local_351 = 8;
  local_34c = 8;
  local_34b = 8;
  local_34a = 8;
  local_349 = 8;
  local_348 = 1;
  local_347 = 1;
  local_346 = 1;
  local_345 = 1;
  local_344 = 1;
  local_343 = 1;
  local_342 = 1;
  local_341 = 1;
  local_340 = 1;
  local_33f = 1;
  local_33e = 1;
  local_35b = 7;
  local_354 = 7;
  local_34d = 7;
  local_33d = 1;
  local_321 = 3;
  local_33c = 1;
  local_33b = 1;
  local_33a = 1;
  local_339 = 1;
  local_338 = 1;
  local_337 = 1;
  local_336 = 1;
  local_335 = 1;
  local_334 = 1;
  local_333 = 1;
  local_332 = 1;
  local_331 = 1;
  local_330 = 1;
  local_32f = 1;
  local_32e = 1;
  local_32d = 1;
  local_32c = 1;
  local_32b = 1;
  local_32a = 2;
  local_329 = 2;
  local_328 = 1;
  local_327 = 1;
  local_326 = 1;
  local_325 = 1;
  local_324 = 1;
  local_323 = 2;
  local_322 = 2;
  local_320 = 1;
  local_31f = 1;
  local_31e = 1;
  local_31d = 1;
  local_31c = 2;
  local_31b = 2;
  local_31a = 3;
  local_319 = 3;
  local_313 = 3;
  local_312 = 3;
  local_311 = 3;
  local_30c = 3;
  local_30b = 3;
  local_30a = 3;
  local_309 = 3;
  local_318 = 1;
  local_317 = 1;
  local_316 = 1;
  local_315 = 2;
  local_314 = 2;
  local_310 = 1;
  local_30f = 1;
  local_30e = 2;
  local_30d = 2;
  memcpy(auStack_308,&DAT_0575e9d0,0x300);
  __filename = (char *)FUN_0547429c(param_1);
  __stream = fopen(__filename,"wb");
  if (__stream != (FILE *)0x0) {
    ErrorHandler::ErrorHandler(aEStack_9a8,ajStack_800);
    iVar2 = setjmp(&_Stack_900);
    if (iVar2 == 0) {
      jpeg_CreateCompress(ajStack_800,0x3e,0x1f8);
      local_7c8 = 3;
      local_7d0 = *(undefined4 *)(param_2 + 8);
      local_7cc = *(undefined4 *)(param_2 + 0xc);
      local_7c4 = 2;
      jpeg_set_defaults(ajStack_800);
      local_6fe = 1;
      jpeg_set_colorspace(ajStack_800,3);
      SetJpegTable(ajStack_800,0,&local_608,param_3);
      SetJpegTable(ajStack_800,1,auStack_308,param_3);
      if (0x32 < param_3) {
        *(undefined4 *)(local_7a8 + 8) = 1;
        *(undefined4 *)(local_7a8 + 0xc) = 1;
      }
      jpeg_stdio_dest(ajStack_800,__stream);
      jpeg_start_compress(ajStack_800,1);
      iVar2 = Image::GetWidth(param_2);
      local_9b0 = operator_new__((long)(iVar2 * 3));
      puVar6 = *(undefined4 **)(param_2 + 0x10);
      if (*(int *)(param_2 + 0xc) < 1) {
LAB_0530dc0c:
        EATextSquish::ColourFit::~ColourFit(local_9b0);
      }
      else {
        iVar2 = 0;
        do {
          if (0 < *(int *)(param_2 + 8)) {
            iVar5 = 0;
            pCVar4 = local_9b0;
            puVar7 = puVar6;
            do {
              puVar6 = puVar7 + 1;
              uVar1 = *puVar7;
              iVar5 = iVar5 + 1;
              pCVar4[2] = SUB41(uVar1,0);
              *pCVar4 = SUB41((uint)uVar1 >> 0x10,0);
              pCVar4[1] = SUB41((uint)uVar1 >> 8,0);
              pCVar4 = pCVar4 + 3;
              puVar7 = puVar6;
            } while (iVar5 < *(int *)(param_2 + 8));
          }
          iVar2 = iVar2 + 1;
          jpeg_write_scanlines(ajStack_800,&local_9b0,1);
        } while (iVar2 < *(int *)(param_2 + 0xc));
        if (local_9b0 != (ColourFit *)0x0) goto LAB_0530dc0c;
      }
      jpeg_finish_compress(ajStack_800);
      jpeg_destroy_compress(ajStack_800);
      fclose(__stream);
      uVar3 = 1;
      goto LAB_0530da2c;
    }
    jpeg_destroy_compress(ajStack_800);
    fclose(__stream);
  }
  uVar3 = 0;
LAB_0530da2c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

