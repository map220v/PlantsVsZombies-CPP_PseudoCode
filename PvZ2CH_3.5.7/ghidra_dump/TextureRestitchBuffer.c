// Class: TextureRestitchBuffer


/* TextureRestitchBuffer::TextureRestitchBuffer() */

void __thiscall TextureRestitchBuffer::TextureRestitchBuffer(TextureRestitchBuffer *this)

{
  this[1] = (TextureRestitchBuffer)0x0;
  *this = (TextureRestitchBuffer)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


/* TextureRestitchBuffer::Add(int, unsigned char const*, int) */

void __thiscall
TextureRestitchBuffer::Add(TextureRestitchBuffer *this,int param_1,uchar *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x18);
  iVar1 = *(uint *)(this + 0x10) - iVar2;
  if ((uint)(iVar2 + param_3) <= *(uint *)(this + 0x10)) {
    iVar1 = param_3;
  }
  memcpy((void *)(*(long *)(this + 8) + (long)iVar2),param_2,(long)iVar1);
  *(int *)(this + 0x14) = param_1;
  this[1] = (TextureRestitchBuffer)0x1;
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + iVar1;
  return;
}


/* TextureRestitchBuffer::freeBuffer() */

void __thiscall TextureRestitchBuffer::freeBuffer(TextureRestitchBuffer *this)

{
  if (*(ColourFit **)(this + 8) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 8));
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* TextureRestitchBuffer::~TextureRestitchBuffer() */

void __thiscall TextureRestitchBuffer::~TextureRestitchBuffer(TextureRestitchBuffer *this)

{
  if (*(ColourFit **)(this + 8) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 8));
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* TextureRestitchBuffer::Clear(bool) */

void __thiscall TextureRestitchBuffer::Clear(TextureRestitchBuffer *this,bool param_1)

{
  *(undefined4 *)(this + 0x18) = 0;
  this[1] = (TextureRestitchBuffer)0x0;
  if (!param_1) {
    return;
  }
  freeBuffer(this);
  return;
}


/* TextureRestitchBuffer::allocBuffer(unsigned int) */

void __thiscall TextureRestitchBuffer::allocBuffer(TextureRestitchBuffer *this,uint param_1)

{
  void *pvVar1;
  
  freeBuffer(this);
  pvVar1 = operator_new__((ulong)param_1);
  *(uint *)(this + 0x10) = param_1;
  *(void **)(this + 8) = pvVar1;
  return;
}


/* TextureRestitchBuffer::Initialize(unsigned int) */

void __thiscall TextureRestitchBuffer::Initialize(TextureRestitchBuffer *this,uint param_1)

{
  if ((*this == (TextureRestitchBuffer)0x0) || (*(uint *)(this + 0x10) < param_1)) {
    allocBuffer(this,param_1);
  }
  *this = (TextureRestitchBuffer)0x1;
  Clear(this,false);
  return;
}

