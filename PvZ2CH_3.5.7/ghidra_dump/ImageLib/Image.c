// Class: ImageLib::Image


/* ImageLib::Image::GetWidth() */

undefined4 __thiscall ImageLib::Image::GetWidth(Image *this)

{
  return *(undefined4 *)(this + 8);
}


/* ImageLib::Image::~Image() */

void __thiscall ImageLib::Image::~Image(Image *this)

{
  *(undefined ***)this = &PTR__Image_06a362a0;
  if (*(ColourFit **)(this + 0x10) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x10));
    return;
  }
  return;
}


/* ImageLib::Image::~Image() */

void __thiscall ImageLib::Image::~Image(Image *this)

{
  ~Image(this);
  AK::FreeHook(this);
  return;
}


/* ImageLib::Image::Image() */

void __thiscall ImageLib::Image::Image(Image *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR__Image_06a362a0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* ImageLib::Image::Image(ImageLib::Image*) */

void __thiscall ImageLib::Image::Image(Image *this,Image *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  void *__dest;
  void *__src;
  ulong uVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  *(int *)(this + 8) = iVar1;
  *(int *)(this + 0xc) = iVar2;
  *(undefined ***)this = &PTR__Image_06a362a0;
  uVar4 = (ulong)(iVar1 * iVar2);
  uVar3 = uVar4 << 2;
  if (0x1fc0000000000000 < uVar4) {
    uVar3 = 0xffffffffffffffff;
  }
  __dest = operator_new__(uVar3);
  *(void **)(this + 0x10) = __dest;
  __src = (void *)open_vcdiff::JSONCodeTableWriter::target_length((JSONCodeTableWriter *)param_1);
  memcpy(__dest,__src,(long)(*(int *)(this + 8) * *(int *)(this + 0xc) * 4));
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}

