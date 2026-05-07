// Class: ToolPacketData_Projectile


/* ToolPacketData_Projectile::StaticGetClass() */

long * ToolPacketData_Projectile::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ToolPacketData::StaticGetClass();
  (*pcVar3)(plVar1,"ToolPacketData_Projectile",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_Projectile::GetClass() const */

long * ToolPacketData_Projectile::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ToolPacketData::StaticGetClass();
  (*pcVar3)(plVar1,"ToolPacketData_Projectile",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_Projectile::ToolPacketData_Projectile() */

void __thiscall
ToolPacketData_Projectile::ToolPacketData_Projectile(ToolPacketData_Projectile *this)

{
  ToolPacketData::ToolPacketData((ToolPacketData *)this);
  *(undefined ***)this = &PTR_GetClass_06849a30;
  return;
}


/* ToolPacketData_Projectile::StaticNew() */

ToolPacketData_Projectile * ToolPacketData_Projectile::StaticNew(void)

{
  ToolPacketData_Projectile *this;
  
  this = ::operator_new(0x10);
  ToolPacketData_Projectile(this);
  return this;
}


/* ToolPacketData_Projectile::~ToolPacketData_Projectile() */

void __thiscall
ToolPacketData_Projectile::~ToolPacketData_Projectile(ToolPacketData_Projectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06849a30;
  ToolPacketData::~ToolPacketData((ToolPacketData *)this);
  return;
}


/* ToolPacketData_Projectile::~ToolPacketData_Projectile() */

void __thiscall
ToolPacketData_Projectile::~ToolPacketData_Projectile(ToolPacketData_Projectile *this)

{
  ~ToolPacketData_Projectile(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketData_Projectile::CanUseAt(Sexy::Point const&) */

void __thiscall ToolPacketData_Projectile::CanUseAt(ToolPacketData_Projectile *this,Point *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  Board *pBVar4;
  undefined8 uVar5;
  Point aPStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_18,*(int *)param_1,*(int *)(param_1 + 4));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  iVar3 = Board::GetCanPlantAtReason(uVar5,aPStack_18,a_Stack_10,0,0xffffffff);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    uVar2 = *(undefined4 *)param_1;
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Board::GiveAdvice(pBVar4,uVar2,uVar1,a_Stack_10,iVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 == 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketData_Projectile::SetData(Sexy::RtWeakPtr<ToolPacketProps>) */

void __thiscall
ToolPacketData_Projectile::SetData(ToolPacketData_Projectile *this,RtWeakPtrBase *param_2)

{
  long lVar1;
  Board *pBVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  PlantAccessoryMgr::SetCurrentPlantType((PlantAccessoryMgr *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  ToolPacketData::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Board::LoadResourceGroupForGameplay(pBVar2,(string *)(lVar1 + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  ToolPacketData::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Board::LoadResourceGroupsForGameplay(pBVar2,(vector *)(lVar1 + 0x78));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketData_Projectile::UseAt(Sexy::Point const&) */

void __thiscall ToolPacketData_Projectile::UseAt(ToolPacketData_Projectile *this,Point *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  string *psVar5;
  AccessoryContent *this_01;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  RtMixedPtrBase aRStack_40 [8];
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 8);
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_05475d88(asStack_48,lVar3 + 0x20);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Sexy::ToWString((string *)(lVar3 + 0x20));
  Sexy::RtName::RtName((RtName *)local_20,(wstring *)&local_30);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_40,uVar4,0xc,(RtName *)local_20);
  Sexy::RtName::~RtName((RtName *)local_20);
  FUN_05476c50((Vec3 *)&local_30);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
  if (cVar1 != '\0') {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    fVar11 = *(float *)(lVar3 + 0x28);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_30,fVar11,0.0,-*(float *)(lVar3 + 0x2c));
    BoardTransforms::GridToBoardSpace(param_1);
    uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)aRStack_40);
    lVar3 = Board::AddProjectile
                      ((Board *)((float)local_38 + local_30),(float)local_34 + local_2c,local_28,
                       uVar4,(RtName *)local_20,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    FUN_0442e024(lVar3 + 0x24);
    cVar2 = CustomLevelUtils::IsCustomLevel();
    if (cVar2 != '\0') {
      std::vector<float,std::allocator<float>>::vector
                ((vector<float,std::allocator<float>> *)local_20,&DAT_057539e0,5,auStack_50);
      this_01 = (AccessoryContent *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
      puVar6 = (undefined8 *)AccessoryContent::GetUIInfo(this_01);
      uVar8 = 0;
      do {
        uVar10 = uVar8;
        uVar4 = *puVar6;
        uVar8 = FUN_0442df48(uVar4,puVar6[1]);
        if (uVar8 <= uVar10) goto LAB_04430478;
        psVar5 = (string *)FUN_0442df54(uVar4,uVar10);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        cVar2 = std::operator==(psVar5,(string *)(lVar7 + 8));
        uVar8 = uVar10 + 1;
      } while (cVar2 == '\0');
      lVar7 = FUN_0442df54(*puVar6,uVar10);
      if (*(int *)(lVar7 + 0xc) < 0) {
        puVar9 = (undefined4 *)FUN_0442df5c(local_20[0],0);
        uVar12 = *puVar9;
      }
      else {
        puVar9 = (undefined4 *)FUN_0442df5c(local_20[0],(long)(*(int *)(lVar7 + 0xc) + -1));
        uVar12 = *puVar9;
      }
      FUN_0442df10(uVar12,lVar3 + 0x170);
LAB_04430478:
      std::vector<float,std::allocator<float>>::~vector
                ((vector<float,std::allocator<float>> *)local_20);
    }
    psVar5 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    AudioMgr::SendEvent(psVar5,(void *)(lVar3 + 0x30));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

