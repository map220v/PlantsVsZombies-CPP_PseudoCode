// Class: Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::VertexTList


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::VertexTList::VertexTList() */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::VertexTList::VertexTList(VertexTList *this)

{
  VertexTList *pVVar1;
  VertexTList *this_00;
  
  this_00 = this;
  do {
    pVVar1 = this_00 + 0x20;
    AndroidGL20Vertex::AndroidGL20Vertex((AndroidGL20Vertex *)this_00);
    this_00 = pVVar1;
  } while (pVVar1 != this + 0xc80);
  *(VertexTList **)(this + 0xc80) = this;
  *(undefined4 *)(this + 0xc88) = 0;
  *(undefined4 *)(this + 0xc8c) = 100;
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::VertexTList::~VertexTList() */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::VertexTList::~VertexTList(VertexTList *this)

{
  ColourFit *this_00;
  
  this_00 = *(ColourFit **)(this + 0xc80);
  if ((this_00 != (ColourFit *)this) && (this_00 != (ColourFit *)0x0)) {
    EATextSquish::ColourFit::~ColourFit(this_00);
    return;
  }
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::VertexTList::reserve(int) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::VertexTList::reserve(VertexTList *this,int param_1)

{
  ulong uVar1;
  AndroidGL20Vertex *__dest;
  ColourFit *this_00;
  AndroidGL20Vertex *this_01;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(this + 0xc8c) < param_1) {
    uVar3 = (ulong)param_1;
    lVar2 = uVar3 - 1;
    uVar1 = uVar3 << 5;
    *(int *)(this + 0xc8c) = param_1;
    if (0x3f8000000000000 < uVar3) {
      uVar1 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar1);
    this_01 = __dest;
    if (uVar3 != 0) {
      do {
        lVar2 = lVar2 + -1;
        AndroidGL20Vertex::AndroidGL20Vertex(this_01);
        this_01 = this_01 + 0x20;
      } while (lVar2 != -1);
    }
    memcpy(__dest,*(void **)(this + 0xc80),(long)*(int *)(this + 0xc88) << 5);
    this_00 = *(ColourFit **)(this + 0xc80);
    if ((this_00 != (ColourFit *)this) && (this_00 != (ColourFit *)0x0)) {
      EATextSquish::ColourFit::~ColourFit(this_00);
    }
    *(AndroidGL20Vertex **)(this + 0xc80) = __dest;
  }
  return;
}


/* Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex, Sexy::GLTexHolder, Sexy::GLExtraRenderDataInfo,
   Sexy::AndroidRenderDeviceES20>::VertexTList::push_back(Sexy::AndroidGL20Vertex const&) */

void __thiscall
Sexy::
BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
::VertexTList::push_back(VertexTList *this,AndroidGL20Vertex *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(this + 0xc88);
  if (uVar4 == *(uint *)(this + 0xc8c)) {
    reserve(this,uVar4 << 1);
    uVar4 = *(uint *)(this + 0xc88);
  }
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = (undefined8 *)
           (*(long *)(this + 0xc80) +
           (-(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar4 << 5));
  *(uint *)(this + 0xc88) = uVar4 + 1;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = uVar2;
  return;
}

