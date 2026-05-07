// Class: Sexy::DeviceImage::CachedImageDrawInfo


/* Sexy::DeviceImage::CachedImageDrawInfo::~CachedImageDrawInfo() */

void __thiscall
Sexy::DeviceImage::CachedImageDrawInfo::~CachedImageDrawInfo(CachedImageDrawInfo *this)

{
  FUN_0512f680(*(undefined8 *)this);
  return;
}


/* Sexy::DeviceImage::CachedImageDrawInfo::UpdateTextureData(int, int, int, int, bool) */

void __thiscall
Sexy::DeviceImage::CachedImageDrawInfo::UpdateTextureData
          (CachedImageDrawInfo *this,int param_1,int param_2,int param_3,int param_4,bool param_5)

{
  if (*(int *)(this + 0x28) != param_1) {
    *(int *)(this + 0x28) = param_1;
    this[0x39] = (CachedImageDrawInfo)0x1;
  }
  if (*(int *)(this + 0x2c) != param_2) {
    *(int *)(this + 0x2c) = param_2;
    this[0x39] = (CachedImageDrawInfo)0x1;
  }
  if (*(int *)(this + 0x30) != param_3) {
    *(int *)(this + 0x30) = param_3;
    this[0x39] = (CachedImageDrawInfo)0x1;
  }
  if (*(int *)(this + 0x34) != param_4) {
    *(int *)(this + 0x34) = param_4;
    this[0x39] = (CachedImageDrawInfo)0x1;
  }
  if (this[0x38] != (CachedImageDrawInfo)param_5) {
    this[0x38] = (CachedImageDrawInfo)param_5;
    this[0x39] = (CachedImageDrawInfo)0x1;
  }
  return;
}


/* Sexy::DeviceImage::CachedImageDrawInfo::CachedImageDrawInfo() */

void __thiscall
Sexy::DeviceImage::CachedImageDrawInfo::CachedImageDrawInfo(CachedImageDrawInfo *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  Insets::Insets((Insets *)(this + 0x18));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x38] = (CachedImageDrawInfo)0x0;
  this[0x39] = (CachedImageDrawInfo)0x0;
  return;
}


/* Sexy::DeviceImage::CachedImageDrawInfo::SaveResult(std::vector<Sexy::DeviceImage::CachedResult,
   std::allocator<Sexy::DeviceImage::CachedResult> > const&) */

void __thiscall
Sexy::DeviceImage::CachedImageDrawInfo::SaveResult(CachedImageDrawInfo *this,vector *param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_1;
  this[0x39] = (CachedImageDrawInfo)0x0;
  iVar3 = FUN_052d99fc(uVar4,uVar7);
  std::vector<Sexy::DeviceImage::CachedResult,std::allocator<Sexy::DeviceImage::CachedResult>>::
  clear((vector<Sexy::DeviceImage::CachedResult,std::allocator<Sexy::DeviceImage::CachedResult>> *)
        this);
  std::vector<Sexy::DeviceImage::CachedResult,std::allocator<Sexy::DeviceImage::CachedResult>>::
  resize((vector<Sexy::DeviceImage::CachedResult,std::allocator<Sexy::DeviceImage::CachedResult>> *)
         this,(long)iVar3);
  if (0 < iVar3) {
    uVar4 = *(undefined8 *)param_1;
    uVar7 = *(undefined8 *)this;
    lVar8 = 0;
    do {
      puVar5 = (undefined8 *)FUN_052d9a1c(uVar7,lVar8);
      lVar1 = lVar8 + 1;
      puVar6 = (undefined8 *)FUN_052d9a28(uVar4,lVar8);
      uVar2 = puVar6[1];
      *puVar5 = *puVar6;
      puVar5[1] = uVar2;
      uVar2 = puVar6[3];
      puVar5[2] = puVar6[2];
      puVar5[3] = uVar2;
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar6 + 4);
      lVar8 = lVar1;
    } while ((int)lVar1 < iVar3);
  }
  return;
}

