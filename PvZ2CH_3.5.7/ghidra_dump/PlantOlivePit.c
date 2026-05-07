// Class: PlantOlivePit


/* PlantOlivePit::CalcRenderOrder() */

undefined4 __thiscall PlantOlivePit::CalcRenderOrder(PlantOlivePit *this)

{
  return *(undefined4 *)(this + 0xac);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::StaticClassInit() */

void PlantOlivePit::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PlantOlivePit");
    (*pcVar2)(plVar1,asStack_10,FUN_04cf2c2c,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantOlivePit::StaticGetClass() */

long * PlantOlivePit::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantOlivePit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantOlivePit::GetClass() const */

long * PlantOlivePit::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantOlivePit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantOlivePit::CheckAboveLevelZombieChew(Zombie*) */

bool __thiscall PlantOlivePit::CheckAboveLevelZombieChew(PlantOlivePit *this,Zombie *param_1)

{
  int iVar1;
  
  if (param_1 != (Zombie *)0x0) {
    iVar1 = FUN_04ceecec(*(undefined4 *)(param_1 + 0x50));
    return *(int *)(this + 0x9c) < iVar1;
  }
  return false;
}


/* PlantOlivePit::PlantOlivePit() */

void __thiscall PlantOlivePit::PlantOlivePit(PlantOlivePit *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069a37a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  return;
}


/* PlantOlivePit::StaticNew() */

PlantOlivePit * PlantOlivePit::StaticNew(void)

{
  PlantOlivePit *this;
  
  this = ::operator_new(0xb0);
  PlantOlivePit(this);
  return this;
}


/* PlantOlivePit::CanBeTargetedBy(BoardEntity const*) */

void __thiscall PlantOlivePit::CanBeTargetedBy(PlantOlivePit *this,BoardEntity *param_1)

{
  long lVar1;
  
  lVar1 = FUN_04cf1300(*(undefined8 *)(this + 0x10));
  ClassRestrictionSet::IsIncluded((ClassRestrictionSet *)(lVar1 + 0x368),(GameObject *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::canEatZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantOlivePit::canEatZombie(PlantOlivePit *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  RtWeakPtrBase *pRVar5;
  Zombie *pZVar6;
  RealObject *this_00;
  long lVar7;
  long *plVar8;
  GameObject *pGVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)(this + 0x30));
  if (cVar1 == '\0') {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x40));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x40));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      pRVar5 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar5);
      cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_20);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        bVar3 = 0;
        goto LAB_04cf13d8;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)param_2);
    if (cVar1 == '\0') {
      pZVar6 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      cVar1 = Zombie::IsTargetable(pZVar6);
      bVar3 = 0;
      if (cVar1 == '\0') goto LAB_04cf13d8;
      pZVar6 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      cVar1 = Zombie::IsOnGround(pZVar6);
      if (cVar1 == '\0') goto LAB_04cf13d8;
      this_00 = (RealObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      cVar1 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
      if (cVar1 != '\0') {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        cVar1 = FUN_04cef974(*(undefined4 *)(lVar7 + 0xcc));
        if (cVar1 == '\0') {
          plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          cVar1 = (**(code **)(*plVar8 + 0x328))();
          if (cVar1 == '\0') {
            pZVar6 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            cVar1 = Zombie::IsIgnoringAllDamage(pZVar6);
            if (cVar1 == '\0') {
              pZVar6 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
              cVar1 = Zombie::IsControlled(pZVar6);
              if (cVar1 == '\0') {
                pZVar6 = (Zombie *)
                         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                cVar1 = Zombie::IsSuspended(pZVar6);
                if (cVar1 == '\0') {
                  pZVar6 = (Zombie *)
                           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                  cVar1 = Zombie::HasFogImmune(pZVar6);
                  if (cVar1 == '\0') {
                    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                    cVar1 = (**(code **)(*plVar8 + 0x4d8))();
                    if (cVar1 == '\0') {
                      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                      cVar1 = (**(code **)(*plVar8 + 0x508))();
                      if (cVar1 == '\0') {
                        pZVar6 = (Zombie *)
                                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                        cVar1 = Zombie::CanTakeFatalDamage(pZVar6);
                        if (cVar1 != '\0') {
                          pZVar6 = (Zombie *)
                                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                          cVar1 = Zombie::IsBerserk(pZVar6);
                          if (cVar1 == '\0') {
                            pZVar6 = (Zombie *)
                                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                            iVar4 = Zombie::GetSizeType(pZVar6);
                            if (iVar4 != 2) {
                              lVar7 = FUN_04cf1300(*(undefined8 *)(this + 0x10));
                              pGVar9 = (GameObject *)
                                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                              bVar3 = ClassRestrictionSet::IsExcluded
                                                ((ClassRestrictionSet *)(lVar7 + 0x2f0),pGVar9);
                              bVar3 = bVar3 ^ 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_04cf13d8;
      }
    }
  }
  bVar3 = 0;
LAB_04cf13d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::canEatZombiePlantfood(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantOlivePit::canEatZombiePlantfood(PlantOlivePit *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  RtWeakPtrBase *pRVar5;
  Zombie *pZVar6;
  RealObject *this_00;
  long lVar7;
  long *plVar8;
  GameObject *pGVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = Zombie::HasCondition(uVar4,0x25);
  if (cVar1 == '\0') {
    cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)param_2,(RtWeakPtrBase *)(this + 0x30))
    ;
    if (cVar1 == '\0') {
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x40));
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x40));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar2) {
        pRVar5 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar5);
        cVar1 = Sexy::RtWeakPtrBase::operator==
                          ((RtWeakPtrBase *)param_2,(RtWeakPtrBase *)aRStack_20);
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          bVar3 = 0;
          goto LAB_04cf1664;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
      cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)param_2);
      if (cVar1 == '\0') {
        cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
        bVar3 = 0;
        if (cVar1 == '\0') {
          pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = Zombie::IsTargetable(pZVar6);
          if (cVar1 == '\0') goto LAB_04cf1664;
          pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = Zombie::IsOnGround(pZVar6);
          if (cVar1 == '\0') goto LAB_04cf1664;
        }
        else {
          pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = Zombie::IsTargetable(pZVar6);
          if (cVar1 == '\0') goto LAB_04cf1660;
        }
        this_00 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        cVar1 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
        if (cVar1 != '\0') {
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = FUN_04cef974(*(undefined4 *)(lVar7 + 0xcc));
          if (cVar1 == '\0') {
            plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            cVar1 = (**(code **)(*plVar8 + 0x328))();
            if (cVar1 == '\0') {
              pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              cVar1 = Zombie::IsIgnoringAllDamage(pZVar6);
              if (cVar1 == '\0') {
                pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                cVar1 = Zombie::IsControlled(pZVar6);
                if (cVar1 == '\0') {
                  pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  cVar1 = Zombie::IsSuspended(pZVar6);
                  if (cVar1 == '\0') {
                    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    cVar1 = Zombie::IsBerserk(pZVar6);
                    if (cVar1 == '\0') {
                      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                      cVar1 = (**(code **)(*plVar8 + 0x4d8))();
                      if (cVar1 == '\0') {
                        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                        cVar1 = (**(code **)(*plVar8 + 0x508))();
                        if (cVar1 == '\0') {
                          pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                          cVar1 = Zombie::CanTakeFatalDamage(pZVar6);
                          if (cVar1 != '\0') {
                            pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                            cVar1 = Zombie::HasFogImmune(pZVar6);
                            if (cVar1 == '\0') {
                              lVar7 = FUN_04cf1300(*(undefined8 *)(this + 0x10));
                              pGVar9 = (GameObject *)
                                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                              bVar3 = ClassRestrictionSet::IsExcluded
                                                ((ClassRestrictionSet *)(lVar7 + 0x2f0),pGVar9);
                              bVar3 = bVar3 ^ 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_04cf1664;
        }
      }
    }
  }
LAB_04cf1660:
  bVar3 = 0;
LAB_04cf1664:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}


/* PlantOlivePit::onAnimTangleStoppedCallback1(std::string const&) */

void PlantOlivePit::onAnimTangleStoppedCallback1(string *param_1)

{
  undefined4 uVar1;
  PlantAnimRig_OlivePit *this;
  PlantAnimRig *pPVar2;
  long lVar3;
  float fVar4;
  
  this = (PlantAnimRig_OlivePit *)FUN_04cf1918(*(undefined8 *)(param_1 + 0x10));
  PlantAnimRig_OlivePit::PlayChewingAnim(this,*(float *)(param_1 + 0xa0));
  pPVar2 = (PlantAnimRig *)
           UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
  PlantAnimRig::SetState(pPVar2,0xe);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar1 = PlantFramework::CalcRenderOrder((PlantFramework *)param_1);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  fVar4 = (float)PVZ_T();
  lVar3 = FUN_04cf1300(*(undefined8 *)(param_1 + 0x10));
  *(float *)(param_1 + 0x8c) = fVar4 + *(float *)(lVar3 + 0x2ec);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::CheckTangleZombie(std::vector<BoardEntity*, std::allocator<BoardEntity*> >) */

void __thiscall
PlantOlivePit::CheckTangleZombie
          (PlantOlivePit *this,vector<BoardEntity*,std::allocator<BoardEntity*>> *param_2)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  Zombie *pZVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(param_2);
  if (cVar1 == '\0') {
    uVar8 = *(undefined8 *)param_2;
    this_00 = (RtMixedPtrBase *)(this + 0x30);
    lVar2 = FUN_04ceed70(uVar8,*(undefined8 *)(param_2 + 8));
    if (lVar2 != 0) {
      do {
        puVar3 = (undefined8 *)FUN_04ceed7c(uVar8,uVar7);
        if ((RtObject *)*puVar3 == (RtObject *)0x0) {
          Sexy::RtMixedPtrBase::IsValid(this_00);
        }
        else {
          pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
          if ((pZVar4 == (Zombie *)0x0) || (cVar1 == '\0')) {
            if (pZVar4 != (Zombie *)0x0) goto LAB_04cf1a48;
          }
          else {
            pZVar5 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            if (pZVar4 != pZVar5) {
LAB_04cf1a48:
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_10,(RtWeakPtrBase *)aRStack_18);
              cVar1 = canEatZombie(this,aRStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
              if (cVar1 != '\0') goto LAB_04cf1aac;
            }
          }
        }
        uVar7 = uVar7 + 1;
        uVar8 = *(undefined8 *)param_2;
        uVar6 = FUN_04ceed70(uVar8,*(undefined8 *)(param_2 + 8));
      } while (uVar7 < uVar6);
    }
  }
  pZVar4 = (Zombie *)0x0;
LAB_04cf1aac:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pZVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::killZombie(Sexy::RtWeakPtr<Zombie>, bool) */

void __thiscall
PlantOlivePit::killZombie(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  Zombie *pZVar3;
  long *plVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar5;
  code *pcVar6;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIgnoresAllDamage(pZVar3,false);
  if (param_3 == '\0') {
    pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar3);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    bVar1 = std::operator!=((string *)(lVar5 + 0x10),"ZombieCamel");
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar2 = (**(code **)(*plVar4 + 0x378))();
      if (cVar2 != '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        (**(code **)(*plVar4 + 0x240))();
      }
    }
  }
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  (**(code **)(*plVar4 + 0x80))(plVar4,1);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pcVar6 = *(code **)(*plVar4 + 0x120);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,aPStack_78,0);
  (*pcVar6)(plVar4,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::onDestroy() */

void __thiscall PlantOlivePit::onDestroy(PlantOlivePit *this)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (cVar1 = Board::IsLevelEnded(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0')) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x30));
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x30));
      killZombie(this,aRStack_10,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    this_00 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
              (this + 0x40);
    cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                      (this_00);
    if (cVar1 == '\0') {
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            bVar2) {
        pRVar3 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar3);
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
          killZombie(this,aRStack_10,1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
      }
    }
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  PlantFramework::onDestroy((PlantFramework *)this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::CancelPlantfood() */

void __thiscall PlantOlivePit::CancelPlantfood(PlantOlivePit *this)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)(this + 0x40)
  ;
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                    (this_00);
  if (cVar1 == '\0') {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar3);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
      killZombie(this,aRStack_10,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantOlivePit::~PlantOlivePit() */

void __thiscall PlantOlivePit::~PlantOlivePit(PlantOlivePit *this)

{
  *(undefined ***)this = &PTR_GetClass_069a37a0;
  std::vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>::
  ~vector((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
           *)(this + 0x70));
  CurveSequence<Sexy::SexyVector3>::~CurveSequence
            ((CurveSequence<Sexy::SexyVector3> *)(this + 0x58));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantOlivePit::~PlantOlivePit() */

void __thiscall PlantOlivePit::~PlantOlivePit(PlantOlivePit *this)

{
  ~PlantOlivePit(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::HandleTangleZombie() */

void __thiscall PlantOlivePit::HandleTangleZombie(PlantOlivePit *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  PopAnimRig *pPVar4;
  float fVar5;
  RtMixedPtr aRStack_a8 [8];
  string asStack_a0 [8];
  RtId aRStack_98 [8];
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04ceecec(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  if ((iVar1 == 5) && (fVar5 = (float)PVZ_T(), *(float *)(this + 0x8c) < fVar5)) {
    (**(code **)(*(long *)this + 0x2b8))(auStack_90,this,3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    EntityFinder::GetEntitiesInRectangle(avStack_80,2,auStack_90);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_68,(vector *)avStack_80);
    lVar2 = CheckTangleZombie(this,avStack_68);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_68);
    if (lVar2 != 0) {
      *(undefined4 *)(this + 0xa8) = 1;
      fVar5 = (float)PVZ_T();
      lVar2 = FUN_04cf1300(*(undefined8 *)(this + 0x10));
      *(float *)(this + 0x90) = fVar5 + *(float *)(lVar2 + 0x2e8);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38),(RtWeakPtrBase *)avStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_68);
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
      lVar2 = FUN_04cf1300(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(lVar2 + 0x2e8),0,uVar3,0x18,1);
      pPVar4 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_a0,"tangle_start");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a8);
      std::string::string((string *)avStack_68,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_98,
                 avStack_68);
      PopAnimRig::PlayAndStop(pPVar4,asStack_a0,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)avStack_68);
      nop();
      Sexy::RtId::~RtId(aRStack_98);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
      std::string::~string(asStack_a0);
      nop();
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::tryAddOilToTile(Sexy::Point) */

void __thiscall PlantOlivePit::tryAddOilToTile(PlantOlivePit *this,Point *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  GridItemSap *this_00;
  GridItemOil *this_01;
  undefined8 extraout_x0;
  Board *this_02;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  Point aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_04cf1300(*(undefined8 *)(this + 0x10));
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x94) = fVar6 + *(float *)(lVar4 + 0x348);
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  if ((((this_02 != (Board *)0x0) &&
       (cVar1 = FUN_04ceed04(this_02 + 0xf8,this_02 + 0xfc,param_2), cVar1 != '\0')) &&
      (iVar2 = Board::GetGridSquareType(this_02,*(int *)param_2,*(int *)(param_2 + 4)), iVar2 != 3))
     && ((iVar2 != 0 && (cVar1 = Board::IsShallowWater(this_02,param_2), cVar1 == '\0')))) {
    Sexy::Point::Point(aPStack_20,*(int *)param_2,*(int *)(param_2 + 4));
    cVar1 = Board::IsSky(this_02,aPStack_20);
    if ((cVar1 == '\0') &&
       (lVar5 = FUN_04cf1afc(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4)), lVar5 == 0)) {
      this_00 = (GridItemSap *)FUN_04cf1be0(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
      lVar5 = FUN_04cf1cc4(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
      this_01 = (GridItemOil *)FUN_04cf1e1c(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
      if (lVar5 == 0) {
        if (this_01 == (GridItemOil *)0x0) {
          if (this_00 != (GridItemSap *)0x0) {
            GridItemSap::OnWashedOut(this_00);
          }
          lVar5 = Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(lVar4 + 0x340),
                                     *(int *)param_2,*(int *)(param_2 + 4),1);
          uVar3 = FUN_04ceec24(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
          FUN_04ceec28(lVar5 + 0x24,uVar3);
          Plant::GetType();
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
          nop();
          uVar3 = *(undefined4 *)(lVar4 + 0x35c);
          std::vector<std::string,std::allocator<std::string>>::vector
                    ((vector<std::string,std::allocator<std::string>> *)aPStack_20,
                     (vector *)avStack_38);
          GridItemOil::InitializeProperties
                    ((GridItemOil *)0x0,uVar3,extraout_x0,aPStack_20,*(undefined4 *)(lVar4 + 0x360))
          ;
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)aPStack_20);
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)avStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        }
        else {
          GridItemOil::ResetTimer(this_01,*(float *)(lVar4 + 0x35c));
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::onUseAttackCallback(float) */

void PlantOlivePit::onUseAttackCallback(float param_1)

{
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Point::Point(aPStack_10,local_18 + 1,local_14);
  tryAddOilToTile();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::onUseSpecialCallback(float) */

void PlantOlivePit::onUseSpecialCallback(float param_1)

{
  int iVar1;
  char cVar2;
  long *in_x0;
  long lVar3;
  int iVar4;
  int iVar5;
  int local_28;
  int local_24;
  Point aPStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(in_x0[2] + 200) == 0xf) {
    (**(code **)(*in_x0 + 0x2b0))(&local_18,in_x0,2);
    if (local_18 < local_18 + local_10) {
      iVar5 = local_18;
      do {
        iVar4 = local_14;
        if (local_14 < local_14 + local_c) {
          do {
            while( true ) {
              Sexy::Point::Point((Point *)&local_28,iVar5,iVar4);
              BoardEntity::CalcGridPosition();
              cVar2 = Sexy::TPoint<int>::operator==((TPoint<int> *)&local_28,(TPoint *)aPStack_20);
              if (cVar2 != '\0') break;
              iVar1 = iVar4 + 1;
              Sexy::Point::Point(aPStack_20,iVar5,iVar4);
              tryAddOilToTile();
              iVar4 = iVar1;
              if (local_14 + local_c <= iVar1) goto LAB_04cf3fa0;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_14 + local_c);
        }
LAB_04cf3fa0:
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_18 + local_10);
    }
  }
  else {
    lVar3 = FUN_04cf1300(in_x0[2]);
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)(lVar3 + 0x34c));
    if (local_18 < local_18 + local_10) {
      iVar5 = local_18;
      do {
        iVar4 = local_14;
        if (local_14 < local_14 + local_c) {
          do {
            BoardEntity::CalcGridPosition();
            iVar1 = iVar4 + local_24;
            iVar4 = iVar4 + 1;
            Sexy::Point::Point(aPStack_20,iVar5 + local_28,iVar1);
            tryAddOilToTile();
          } while (iVar4 < local_14 + local_c);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_18 + local_10);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::setupZombieToBeSwallowed(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantOlivePit::setupZombieToBeSwallowed(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  bool bVar2;
  Zombie *pZVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  RealObject *this;
  ulong uVar7;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::GetHasPlantFood(pZVar3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = Zombie::HasCondition(uVar4,0x12);
  if (cVar1 == '\0') {
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x13);
  }
  else {
    local_24 = 0x12;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x13);
  }
  if (cVar1 == '\0') {
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x14);
  }
  else {
    local_24 = 0x13;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x14);
  }
  if (cVar1 == '\0') {
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x15);
  }
  else {
    local_24 = 0x14;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x15);
  }
  if (cVar1 == '\0') {
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x16);
  }
  else {
    local_24 = 0x15;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x16);
  }
  if (cVar1 == '\0') {
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x17);
  }
  else {
    local_24 = 0x16;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x17);
  }
  if (cVar1 != '\0') {
    local_24 = 0x17;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
  }
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIsBeingPulledByOlivePit(pZVar3,true);
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::ClearConditions(pZVar3);
  bVar2 = (bool)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetHasPlantFood(bVar2);
  uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pZVar3 = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar3,0,uVar4,2,1);
  uVar7 = 0;
  while( true ) {
    uVar6 = FUN_04ceed84(local_20,local_18);
    if (uVar6 <= uVar7) break;
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    puVar5 = (undefined4 *)FUN_04ceed90(local_20,uVar7);
    Zombie::ApplyCondition(pZVar3,0,uVar4,*puVar5,1);
    uVar7 = uVar7 + 1;
  }
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetMarkedForDeath(pZVar3);
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIsControlled(pZVar3,true);
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIgnoresAllDamage(pZVar3,true);
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIgnoresCollisions(pZVar3,true);
  this = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  RealObject::SetDisableSnapToGround(this,true);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::DragInZombies(std::vector<BoardEntity*, std::allocator<BoardEntity*> >) */

void __thiscall
PlantOlivePit::DragInZombies
          (PlantOlivePit *this,vector<BoardEntity*,std::allocator<BoardEntity*>> *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  ZombieChicken *pZVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  float fVar11;
  CurveSequence<Sexy::SexyVector3> *pCVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  float local_48;
  Vec3 aVStack_40 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [12];
  int local_24;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(param_2);
  if (cVar1 == '\0') {
    uVar9 = 0;
    uVar10 = *(undefined8 *)param_2;
    iVar8 = 0;
    uVar3 = FUN_04ceed70(uVar10,*(undefined8 *)(param_2 + 8));
    if (uVar3 != 0) {
      do {
        puVar4 = (undefined8 *)FUN_04ceed7c(uVar10,uVar9);
        if ((RtObject *)*puVar4 != (RtObject *)0x0) {
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
          if (this_00 != (Zombie *)0x0) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_30);
            cVar1 = canEatZombiePlantfood(this,aRStack_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            if (cVar1 != '\0') {
              pZVar5 = Sexy::RtObject::Cast<ZombieChicken>((RtObject *)this_00);
              if (pZVar5 == (ZombieChicken *)0x0) {
LAB_04cf448c:
                iVar8 = iVar8 + 1;
              }
              else {
                pZVar5 = Sexy::RtObject::Cast<ZombieChicken>((RtObject *)this_00);
                if (pZVar5 != (ZombieChicken *)0x0) {
                  this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
                  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
                  bVar2 = std::operator==((string *)(lVar6 + 8),"iceage_weasel_elite");
                  if (bVar2) goto LAB_04cf448c;
                }
              }
              if (*(int *)(this + 0xa4) < iVar8) break;
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_20,(RtWeakPtrBase *)aRStack_30);
              setupZombieToBeSwallowed(this,aRStack_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
              Sexy::Insets::Insets((Insets *)aRStack_30);
              plVar7 = (long *)Zombie::GetAnimRig(this_00);
              (**(code **)(*plVar7 + 0x90))(plVar7,aRStack_30);
              puVar4 = (undefined8 *)
                       std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)this_00);
              local_60 = *puVar4;
              local_58 = *(undefined4 *)(puVar4 + 1);
              puVar4 = (undefined8 *)
                       std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       **)(this + 0x10));
              local_50 = *puVar4;
              local_48 = *(float *)(puVar4 + 1);
              Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
              fVar11 = (float)PVZ_T();
              CurveSequence<Sexy::SexyVector3>::StartSequence
                        ((CurveSequence<Sexy::SexyVector3> *)aRStack_20,fVar11,
                         (SexyVector3 *)&local_60);
              lVar6 = FUN_04cf1300(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
              CurveSequence<Sexy::SexyVector3>::AddCurve
                        (*(CurveSequence<Sexy::SexyVector3> **)(lVar6 + 0x394),aRStack_20,
                         (SexyVector3 *)&local_60,&local_50,1);
              lVar6 = FUN_04cf1300(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
              pCVar12._0_4_ = *(CurveSequence<Sexy::SexyVector3> **)(lVar6 + 0x398);
              fVar11 = (float)FUN_04cef00c();
              EATextSquish::Vec3::Vec3
                        (aVStack_40,(float)local_50,local_50._4_4_,
                         local_48 - (float)local_24 * fVar11);
              CurveSequence<Sexy::SexyVector3>::AddCurve
                        (pCVar12._0_4_,aRStack_20,&local_50,aVStack_40,1);
              std::
              vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
              ::push_back((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
                           *)(this + 0x70),(CurveSequence *)aRStack_20);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aVStack_40,(RtWeakPtrBase *)aRStack_68);
              std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
              push_back((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                        (this + 0x40),(RtWeakPtr *)aVStack_40);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_40);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
              CurveSequence<Sexy::SexyVector3>::~CurveSequence
                        ((CurveSequence<Sexy::SexyVector3> *)aRStack_20);
            }
          }
          uVar10 = *(undefined8 *)param_2;
          uVar3 = FUN_04ceed70(uVar10,*(undefined8 *)(param_2 + 8));
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::setState(int) */

void __thiscall PlantOlivePit::setState(PlantOlivePit *this,int param_1)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this_00;
  char cVar1;
  bool bVar2;
  PopAnimRig *pPVar3;
  PlantAnimRig *pPVar4;
  long *plVar5;
  PlantAnimRig_OlivePit *this_01;
  RtWeakPtrBase *pRVar6;
  long lVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  undefined8 local_90 [2];
  undefined8 local_80 [3];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  lVar7 = *(long *)(this + 0x10);
  *(int *)(lVar7 + 200) = param_1;
  local_8 = ___stack_chk_guard;
  FUN_04cf1300(lVar7);
  switch(param_1) {
  case 10:
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)local_90);
    std::string::string((string *)aRStack_68,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
               (RtId *)local_80,(string *)aRStack_68);
    PopAnimRig::PlayAndStop(pPVar3,&DAT_06b966d0,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_68);
    nop();
    Sexy::RtId::~RtId((RtId *)local_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_90);
    break;
  case 0xb:
    plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar5 + 0x118))();
    break;
  case 0xd:
    fVar8 = (float)PVZ_T();
    *(float *)(this + 0x88) = fVar8 + *(float *)(this + 0xa0);
    this_01 = (PlantAnimRig_OlivePit *)FUN_04cf1918(*(undefined8 *)(this + 0x10));
    PlantAnimRig_OlivePit::PlayChewingAnim(this_01,*(float *)(this + 0xa0));
    pPVar4 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar4,0xe);
    break;
  case 0xe:
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)local_90);
    std::string::string((string *)aRStack_68,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
               (RtId *)local_80,(string *)aRStack_68);
    PopAnimRig::PlayAndStop(pPVar3,&DAT_06b96618,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_68);
    nop();
    Sexy::RtId::~RtId((RtId *)local_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_90);
    pPVar4 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar4,0xe);
    break;
  case 0xf:
    this_00 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
              (this + 0x40);
    *(undefined4 *)(this + 0x28) = 0;
    cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                      (this_00);
    if (cVar1 == '\0') {
      local_90[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)this_00);
      local_80[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)this_00);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)local_90,(__normal_iterator *)local_80), bVar2)
      {
        pRVar6 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_90);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_98,pRVar6);
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_98);
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_98);
          killZombie(this,aRStack_68,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_90);
      }
    }
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear(this_00);
    std::vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>::
    clear((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
           *)(this + 0x70));
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x30));
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)(this + 0x30));
      killZombie(this,aRStack_68,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    (**(code **)(*(long *)this + 0x2b8))(local_90,this,1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80);
    EntityFinder::GetEntitiesInRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80,2,local_90)
    ;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_68,(vector *)local_80);
    DragInZombies(this,aRStack_68);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_68);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::Initialize() */

void __thiscall PlantOlivePit::Initialize(PlantOlivePit *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  PlantAnimRig *pPVar7;
  long lVar8;
  Plant *this_00;
  undefined4 uVar9;
  float fVar10;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x30));
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x38));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  uVar9 = PVZ_EOT();
  *(undefined4 *)(this + 0x88) = uVar9;
  *(undefined4 *)(this + 0x90) = uVar9;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x94) = uVar9;
  setState(this,10);
  lVar4 = FUN_04cf1300(*(undefined8 *)(this + 0x10));
  this_00 = *(Plant **)(this + 0x10);
  iVar3 = FUN_04ceecec(*(undefined4 *)(this_00 + 0x50));
  if (iVar3 == 1) {
    uVar9 = *(undefined4 *)(lVar4 + 0x2c4);
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(lVar4 + 0x2b8);
    *(undefined4 *)(this + 0xa0) = uVar9;
  }
  else if (iVar3 == 2) {
    uVar9 = *(undefined4 *)(lVar4 + 0x2c8);
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(lVar4 + 700);
    *(undefined4 *)(this + 0xa0) = uVar9;
  }
  else {
    uVar9 = *(undefined4 *)(lVar4 + 0x2cc);
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(lVar4 + 0x2c0);
    *(undefined4 *)(this + 0xa0) = uVar9;
  }
  fVar10 = (float)Plant::GetGeneSkillBoost(this_00);
  uVar5 = *(undefined8 *)(lVar4 + 0x2d0);
  *(float *)(this + 0xa0) = *(float *)(this + 0xa0) - fVar10;
  puVar6 = (undefined4 *)FUN_04ceed40(uVar5,(long)(iVar3 + -1));
  *(undefined4 *)(this + 0x9c) = *puVar6;
  pPVar7 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUseSpecialCallback);
  Sexy::Delegate1<float>::Delegate1<PlantOlivePit,void(PlantOlivePit::*)(float)>
            (aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUseAttackCallback);
  Sexy::Delegate1<float>::Delegate1<PlantOlivePit,void(PlantOlivePit::*)(float)>
            (aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar7,aDStack_68,aDStack_38);
  lVar8 = FUN_04cf1918(*(undefined8 *)(this + 0x10));
  uVar9 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  FUN_04ceecfc(lVar8 + 0x3bc,uVar9);
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  uVar1 = *(undefined4 *)(lVar4 + 0x39c);
  uVar9 = *(undefined4 *)(lVar4 + 0x3a0);
  *(undefined4 *)(this + 0xa8) = 0;
  if (cVar2 == '\0') {
    uVar9 = uVar1;
  }
  *(undefined4 *)(this + 0xa4) = uVar9;
  uVar9 = PlantFramework::CalcRenderOrder((PlantFramework *)this);
  *(undefined4 *)(this + 0xac) = uVar9;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::UpdateChewing() */

void __thiscall PlantOlivePit::UpdateChewing(PlantOlivePit *this)

{
  int iVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  undefined8 uVar4;
  Zombie *pZVar5;
  code *pcVar6;
  RtMixedPtrBase *this_00;
  float fVar7;
  undefined4 uVar8;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  iVar1 = *(int *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0) {
    fVar7 = (float)PVZ_T();
    if (fVar7 < *(float *)(this + 0x88)) {
      HandleTangleZombie(this);
    }
    else {
      *(undefined4 *)(this + 0x28) = 0;
      uVar8 = PVZ_EOT();
      *(undefined4 *)(this + 0x88) = uVar8;
      setState(this,0xb);
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(this + 0xa8) = 2;
    uVar8 = Board::MakeRenderOrder(0x639c0,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
    *(undefined4 *)(this + 0xac) = uVar8;
  }
  else if (iVar1 == 2) {
    fVar7 = (float)PVZ_T();
    if (fVar7 < *(float *)(this + 0x90)) {
      FUN_04cf1300();
      fVar7 = (float)PVZ_T();
      if (fVar7 < *(float *)(this + 0x88)) goto LAB_04cf4c40;
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_58,"tangle_end");
      pcVar6 = onAnimTangleStoppedCallback2;
    }
    else {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_58,"tangle_end");
      pcVar6 = onAnimTangleStoppedCallback1;
    }
    this_00 = (RtMixedPtrBase *)(this + 0x38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,pcVar6);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantOlivePit,void(PlantOlivePit::*)(std::string_const&)>(aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    uVar8 = PVZ_EOT();
    *(undefined4 *)(this + 0xa8) = 3;
    *(undefined4 *)(this + 0x90) = uVar8;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar2 = Zombie::HasCondition(uVar4,0x18);
      if (cVar2 != '\0') {
        pZVar5 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Zombie::EndCondition(pZVar5,0x18);
      }
    }
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
LAB_04cf4c40:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::SwallowZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantOlivePit::SwallowZombie(PlantOlivePit *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  Zombie *this_00;
  long *plVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  CurveSequence<Sexy::SexyVector3> *pCVar8;
  float fVar7;
  undefined8 local_50;
  float local_48;
  Vec3 aVStack_40 [16];
  Insets aIStack_30 [12];
  int local_24;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)param_2);
    setupZombieToBeSwallowed(this,aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    setState(this,0xc);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x30),(RtWeakPtr *)param_2);
    Sexy::Insets::Insets(aIStack_30);
    this_00 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    plVar2 = (long *)Zombie::GetAnimRig(this_00);
    (**(code **)(*plVar2 + 0x90))(plVar2,aIStack_30);
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    local_50 = *puVar3;
    local_48 = *(float *)(puVar3 + 1);
    fVar5 = (float)FUN_04cef00c();
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = (**(code **)(*plVar2 + 0x378))();
    if (cVar1 == '\0') {
      fVar7 = 0.9;
    }
    else {
      fVar7 = 0.3;
    }
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
    fVar6 = (float)PVZ_T();
    CurveSequence<Sexy::SexyVector3>::StartSequence
              ((CurveSequence<Sexy::SexyVector3> *)aRStack_20,fVar6,(SexyVector3 *)&local_50);
    lVar4 = FUN_04cf1300(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
    pCVar8._0_4_ = *(CurveSequence<Sexy::SexyVector3> **)(lVar4 + 0x390);
    EATextSquish::Vec3::Vec3
              (aVStack_40,(float)local_50,local_50._4_4_,local_48 - fVar7 * fVar5 * (float)local_24)
    ;
    CurveSequence<Sexy::SexyVector3>::AddCurve
              (pCVar8._0_4_,aRStack_20,(SexyVector3 *)&local_50,aVStack_40,1);
    CurveSequence<Sexy::SexyVector3>::operator=
              ((CurveSequence<Sexy::SexyVector3> *)(this + 0x58),(CurveSequence *)aRStack_20);
    CurveSequence<Sexy::SexyVector3>::~CurveSequence((CurveSequence<Sexy::SexyVector3> *)aRStack_20)
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::UpdateActions() */

void PlantOlivePit::UpdateActions(void)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *pvVar1;
  RtMixedPtrBase *this;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  PlantOlivePit *in_x0;
  long lVar6;
  RtWeakPtrBase *pRVar7;
  CurveSequence<Sexy::SexyVector3> *pCVar8;
  long *plVar9;
  PopAnimRig *this_00;
  GameObject *pGVar10;
  Zombie *pZVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  float fVar17;
  undefined4 in_s1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = FUN_04cf1300(*(undefined8 *)(in_x0 + 0x10));
  switch(*(undefined4 *)(*(long *)(in_x0 + 0x10) + 200)) {
  case 0xb:
    pvVar1 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (in_x0 + 0x40);
    cVar3 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                      (pvVar1);
    if (cVar3 == '\0') {
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)pvVar1);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)pvVar1);
      while (bVar4 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
            bVar4) {
        pRVar7 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar7);
        cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
        if (cVar3 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
          killZombie();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
      }
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear(pvVar1);
    }
    if (*(int *)(in_x0 + 0x98) <= *(int *)(in_x0 + 0x28)) {
      setState(in_x0,0xd);
      break;
    }
    PlantFramework::FindTargetZombie((RtWeakPtr *)&local_20);
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_20);
    if (bVar4) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)&local_20);
      cVar3 = canEatZombie();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      if (cVar3 == '\0') goto LAB_04cf506c;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)&local_20);
      SwallowZombie();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      pGVar10 = (GameObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20)
      ;
      cVar3 = ClassRestrictionSet::IsExcluded((ClassRestrictionSet *)(lVar6 + 0x318),pGVar10);
      if (cVar3 == '\0') {
        pZVar11 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        cVar3 = CheckAboveLevelZombieChew(in_x0,pZVar11);
        if (cVar3 == '\0') {
          *(int *)(in_x0 + 0x28) = *(int *)(in_x0 + 0x28) + 1;
        }
        else {
          *(undefined4 *)(in_x0 + 0x28) = *(undefined4 *)(in_x0 + 0x98);
        }
      }
    }
    else {
LAB_04cf506c:
      fVar17 = (float)PVZ_T();
      if (*(float *)(in_x0 + 0x94) <= fVar17) {
        setState(in_x0,0xe);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    break;
  case 0xc:
    this = (RtMixedPtrBase *)(in_x0 + 0x30);
    cVar3 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar3 != '\0') {
      fVar17 = (float)PVZ_T();
      cVar3 = CurveSequence<Sexy::SexyVector3>::IsTimeInSequence
                        ((CurveSequence<Sexy::SexyVector3> *)(in_x0 + 0x58),fVar17);
      if (cVar3 == '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)this);
        killZombie();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        setState(in_x0,0xb);
      }
      else {
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
        pcVar16 = *(code **)(*plVar9 + 0x78);
        fVar17 = (float)PVZ_T();
        local_18 = CurveSequence<Sexy::SexyVector3>::GetValueAt
                             ((CurveSequence<Sexy::SexyVector3> *)(in_x0 + 0x58),fVar17);
        (*pcVar16)(plVar9,&local_18);
      }
    }
    break;
  case 0xd:
    UpdateChewing(in_x0);
    break;
  case 0xf:
    pvVar1 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (in_x0 + 0x40);
    cVar3 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                      (pvVar1);
    if (cVar3 == '\0') {
      uVar12 = *(undefined8 *)(in_x0 + 0x40);
      iVar5 = FUN_04ceed50(uVar12,*(undefined8 *)(in_x0 + 0x48));
      uVar2 = iVar5 - 1;
      if (-1 < (int)uVar2) {
        lVar13 = (long)(int)uVar2 + -1;
        lVar6 = lVar13;
        lVar15 = (long)(int)uVar2;
        do {
          lVar14 = lVar6;
          pRVar7 = (RtWeakPtrBase *)FUN_04ceed5c(uVar12,lVar15);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar7);
          cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
          if (cVar3 == '\0') {
LAB_04cf5130:
            local_28 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)pvVar1);
            local_20 = __gnu_cxx::
                       __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                       ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                    *)&local_28,lVar15);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_18,(__normal_iterator *)&local_20);
            std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                      (pvVar1,CONCAT44(uStack_14,local_18));
          }
          else {
            pCVar8 = (CurveSequence<Sexy::SexyVector3> *)
                     FUN_04ceed64(*(undefined8 *)(in_x0 + 0x70),lVar15);
            fVar17 = (float)PVZ_T();
            cVar3 = CurveSequence<Sexy::SexyVector3>::IsTimeInSequence(pCVar8,fVar17);
            if (cVar3 == '\0') {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
              killZombie();
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
              goto LAB_04cf5130;
            }
            plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
            pcVar16 = *(code **)(*plVar9 + 0x78);
            pCVar8 = (CurveSequence<Sexy::SexyVector3> *)
                     FUN_04ceed64(*(undefined8 *)(in_x0 + 0x70),lVar15);
            fVar17 = (float)PVZ_T();
            local_18 = CurveSequence<Sexy::SexyVector3>::GetValueAt(pCVar8,fVar17);
            uStack_14 = in_s1;
            (*pcVar16)(plVar9,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          if (lVar14 == lVar13 - (ulong)uVar2) break;
          uVar12 = *(undefined8 *)(in_x0 + 0x40);
          lVar6 = lVar14 + -1;
          lVar15 = lVar14;
        } while( true );
      }
    }
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(in_x0 + 0x10));
    cVar3 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar3 == '\0') {
      setState(in_x0,0xb);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOlivePit::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantOlivePit::onAnimStoppedCallback(PlantOlivePit *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  PopAnimRig *pPVar3;
  int local_48;
  int local_44;
  Point aPStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::operator==(param_1,(string *)&DAT_06b96618);
  if (cVar1 == '\0') {
    cVar1 = std::operator==(param_1,(string *)&DAT_06b966d0);
    if (cVar1 == '\0') {
      bVar2 = std::operator==(param_1,"tangle_start");
      if (bVar2) {
        *(undefined4 *)(this + 0xa8) = 2;
        pPVar3 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        std::string::string((string *)aPStack_40,"tangle_loop");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar3,(string *)aPStack_40,0,aDStack_38);
        std::string::~string((string *)aPStack_40);
        nop();
      }
      else {
        std::operator==(param_1,"tangle_end");
      }
      goto LAB_04cf5520;
    }
    BoardEntity::CalcGridPosition();
    Sexy::Point::Point(aPStack_40,local_48 + 1,local_44);
    tryAddOilToTile(this,aPStack_40);
  }
  setState(this,0xb);
LAB_04cf5520:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantOlivePit::onAnimTangleStoppedCallback2(std::string const&) */

void PlantOlivePit::onAnimTangleStoppedCallback2(string *param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  setState((PlantOlivePit *)param_1,0xb);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar2 = PlantFramework::CalcRenderOrder((PlantFramework *)param_1);
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  fVar3 = (float)PVZ_T();
  lVar1 = FUN_04cf1300(*(undefined8 *)(param_1 + 0x10));
  *(float *)(param_1 + 0x8c) = fVar3 + *(float *)(lVar1 + 0x2ec);
  return;
}


/* PlantOlivePit::ApplyPlantfood() */

void __thiscall PlantOlivePit::ApplyPlantfood(PlantOlivePit *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,0xf);
  return;
}

