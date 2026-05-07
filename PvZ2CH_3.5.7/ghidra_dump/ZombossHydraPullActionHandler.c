// Class: ZombossHydraPullActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraPullActionHandler::spawnPlantGuts(BoardEntity const*) */

void __thiscall
ZombossHydraPullActionHandler::spawnPlantGuts
          (ZombossHydraPullActionHandler *this,BoardEntity *param_1)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  SexyVector3 *this_01;
  char *__s;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  string asStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_ZOMBOSS_PLANT_PULLED");
  GetPAMByName(asStack_28);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_28);
  nop();
  uVar5 = 0x42200000;
  uVar4 = 0x41000000;
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,-40.0,8.0,40.0);
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)asStack_28);
  local_14 = uVar4;
  local_10 = uVar5;
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar1 + -1);
  Effect_PopAnim::SetCentered(this_00,true);
  fVar3 = (float)Sexy::Rand(1.0);
  if (fVar3 < 0.5) {
    __s = "animation2";
  }
  else {
    __s = "animation3";
  }
  std::string::string((string *)&local_18,__s);
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraPullActionHandler::StaticClassInit() */

void ZombossHydraPullActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossHydraPullActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f5bf80,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHydraPullActionHandler::StaticGetClass() */

long * ZombossHydraPullActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossHydraPullActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossHydraPullActionHandler::GetClass() const */

long * ZombossHydraPullActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossHydraPullActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossHydraPullActionHandler::onFanPullEndEnded(std::string const&) */

void ZombossHydraPullActionHandler::onFanPullEndEnded(string *param_1)

{
  long *extraout_x0;
  
  ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  nop();
  (**(code **)(*extraout_x0 + 0xa80))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraPullActionHandler::setPlantingStatus(bool) const */

void __thiscall
ZombossHydraPullActionHandler::setPlantingStatus(ZombossHydraPullActionHandler *this,bool param_1)

{
  char cVar1;
  UINewPVPTopZombieQueue *this_00;
  UIWidget *pUVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  for (iVar3 = 0; cVar1 = FUN_04f50f54(this_00[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
    UINewPVPTopZombieQueue::gettItem(this_00,iVar3);
    pUVar2 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    UIWidget::SetClickable(pUVar2,!param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::string::string((string *)aRStack_10,"UIPlantfood");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetClickable(pUVar2,!param_1);
  }
  if (param_1) {
    Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHydraPullActionHandler::endSuction() */

void __thiscall ZombossHydraPullActionHandler::endSuction(ZombossHydraPullActionHandler *this)

{
  setPlantingStatus(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraPullActionHandler::onEndAction() */

void __thiscall ZombossHydraPullActionHandler::onEndAction(ZombossHydraPullActionHandler *this)

{
  RealObject *pRVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  endSuction(this);
  pRVar1 = (RealObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  std::string::string(asStack_10,"Play_Zomb_Beach_Zomboss_Suction_Off");
  RealObject::PlayPositionalSound(pRVar1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  pRVar1 = (RealObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  std::string::string(asStack_10,"Play_Zomb_Beach_Zomboss_Suction_Off_Fan_Disappears");
  RealObject::PlayPositionalSound(pRVar1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHydraPullActionHandler::ZombossHydraPullActionHandler() */

void __thiscall
ZombossHydraPullActionHandler::ZombossHydraPullActionHandler(ZombossHydraPullActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a1e4d0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar1;
  Sexy::Point::Point((Point *)(this + 0x2c));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  *(undefined4 *)(this + 0x50) = uVar1;
  return;
}


/* ZombossHydraPullActionHandler::StaticNew() */

ZombossHydraPullActionHandler * ZombossHydraPullActionHandler::StaticNew(void)

{
  ZombossHydraPullActionHandler *this;
  
  this = ::operator_new(0x58);
  ZombossHydraPullActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraPullActionHandler::onUpdateAction() */

void __thiscall ZombossHydraPullActionHandler::onUpdateAction(ZombossHydraPullActionHandler *this)

{
  char cVar1;
  ZombieZombossMech *this_00;
  ZombossHydraSprayActionDefinition *pZVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  cVar1 = (**(code **)(*(long *)this_00 + 0xa90))();
  if (cVar1 == '\0') {
    fVar4 = (float)ZombieZombossMech::GetPlantfoodDamageCounterValue(this_00);
    pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    fVar7 = *(float *)(pZVar2 + 0x3c);
    fVar5 = (float)ZombieZombossMech::GetStunHpFactor(this_00);
    if (fVar5 * fVar7 < fVar4) {
      ZombieZombossMech::DoStun(this_00);
    }
    else {
      fVar4 = (float)PVZ_T();
      if (*(float *)(this + 0x50) < fVar4) {
        pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onFanPullEndEnded");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        ZombieAnimRig_ZombossMech_Hydra::PlayFanPullEnd
                  ((ZombieAnimRig_ZombossMech_Hydra *)pZVar3,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        uVar6 = PVZ_EOT();
        *(undefined4 *)(this + 0x50) = uVar6;
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
/* ZombossHydraPullActionHandler::onBlackHoleInAnimCompleted() */

void __thiscall
ZombossHydraPullActionHandler::onBlackHoleInAnimCompleted(ZombossHydraPullActionHandler *this)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  undefined *puVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var10;
  float *pfVar11;
  Board *this_00;
  PlantGroup *pPVar12;
  undefined8 *puVar13;
  RtWeakPtrBase *pRVar14;
  undefined8 uVar15;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar16;
  long lVar17;
  Plant *pPVar18;
  ResourceInfo *pRVar19;
  code *pcVar20;
  bool bVar21;
  int iVar22;
  float fVar23;
  bool bVar24;
  float fVar25;
  int iVar26;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  undefined4 local_54;
  float local_50;
  undefined4 local_48;
  undefined8 local_38;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  undefined1 local_1c;
  undefined4 local_18;
  long local_8;
  
  iVar1 = *(int *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  fVar23 = (float)PVZ_T();
  *(float *)(this + 0x50) = (float)iVar1 + 1.0 + 1.0 + fVar23;
  p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pfVar11 = (float *)std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(p_Var10);
  fVar23 = *pfVar11;
  fVar25 = pfVar11[1];
  iVar26 = *(int *)(this + 0x30) + -1;
LAB_04f58ab0:
  puVar4 = gMessageRouter;
  Sexy::Point::Point((Point *)&local_38,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -3,iVar26);
  MessageRouter::Post<Sexy::Point_const&,float,Sexy::Point,float>
            ((MessageRouter *)((float)iVar1 + 1.0),puVar4,Message::PlantAbsorbed,(Point *)&local_38)
  ;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar8 = *(int *)(this_00 + 0xf8);
  iVar22 = iVar8;
  if (iVar8 + -3 <= iVar8) {
    do {
      iVar9 = iVar22 + -1;
      pPVar12 = (PlantGroup *)Board::GetPlantGroupAt(this_00,iVar9,iVar26);
      if (pPVar12 != (PlantGroup *)0x0) {
        puVar13 = (undefined8 *)PlantGroup::Plants();
        local_68 = FUN_04f55298(*puVar13);
        local_38 = FUN_04f552e8(puVar13[1]);
        while (bVar5 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_68,(__normal_iterator *)&local_38),
              bVar5) {
          pRVar14 = (RtWeakPtrBase *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_70,pRVar14);
          cVar6 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_70);
          if (cVar6 != '\0') {
            uVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
            cVar6 = Plant::HasCondition(uVar15,0x22);
            if (cVar6 != '\0') goto LAB_04f58bb0;
            uVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
            cVar6 = Plant::HasCondition(uVar15,0x21);
            if (cVar6 != '\0') goto LAB_04f58bb0;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
        }
        cVar6 = PlantGroup::CanAttackRelocateGroup(pPVar12,(BoardEntity *)0x0);
        if (cVar6 != '\0') {
          local_68 = FUN_04f55298(*puVar13);
          local_38 = FUN_04f552e8(puVar13[1]);
          bVar24 = false;
          bVar21 = false;
          bVar5 = false;
          while (bVar7 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_68,(__normal_iterator *)&local_38),
                bVar7) {
            pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
            pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar16);
            cVar6 = PlantTurnip::WhetherCanBePulled
                              ((Plant *)pRVar19,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
            if (cVar6 == '\0') {
              bVar5 = true;
            }
            pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar16);
            cVar6 = PlantMagicbeans::WhetherCanBePulled
                              ((Plant *)pRVar19,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
            if (cVar6 == '\0') {
              bVar24 = true;
            }
            pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar16);
            cVar6 = PlantNightcap::WhetherCanBePulled
                              ((Plant *)pRVar19,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
            if (cVar6 == '\0') {
              bVar21 = true;
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
          }
          if ((bVar24 || bVar21) || (bVar5)) {
            iVar8 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
            break;
          }
          local_78 = FUN_04f55298(*puVar13);
          local_70 = FUN_04f552e8(puVar13[1]);
          while (bVar5 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70),
                bVar5) {
            pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
            lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
            pcVar20 = *(code **)(**(long **)(lVar17 + 0xa8) + 0x440);
            if (pcVar20 != PlantFramework::stopSpecialEffect) {
              (*pcVar20)();
            }
            p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
            lVar17 = std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(p_Var10);
            fVar2 = *(float *)(lVar17 + 4);
            RelocationEvent::RelocationEvent((RelocationEvent *)&local_68);
            iVar8 = BoardTransforms::GridToBoardSpaceX(iVar9);
            local_68 = CONCAT44(fVar2,(float)iVar8);
            local_54 = PVZ_T();
            local_50 = (float)PVZ_T();
            local_50 = local_50 + 1.0;
            local_48 = 5;
            local_60 = (float)local_68 + 8.0;
            local_5c = local_68._4_4_;
            pPVar18 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
            Plant::addRelocationEvent(pPVar18,(RelocationEvent *)&local_68);
            if (iVar22 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -2) {
              RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
              iVar8 = BoardTransforms::GridToBoardSpaceX(iVar9);
              local_38 = CONCAT44(fVar2,(float)iVar8);
              local_24 = (float)PVZ_T();
              local_24 = local_24 + 1.0;
              iVar8 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
              local_20 = local_24 + (float)((iVar8 - iVar22) + -2);
              iVar8 = BoardTransforms::GridToBoardSpaceX(iVar8 + -3);
              local_30 = (float)iVar8;
              local_18 = 1;
              local_1c = 1;
              local_2c = fVar2;
              pPVar18 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
              Plant::addRelocationEvent(pPVar18,(RelocationEvent *)&local_38);
            }
            RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
            iVar8 = BoardTransforms::GridToBoardSpaceX
                              (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -3);
            local_38 = CONCAT44(fVar2,(float)iVar8);
            local_24 = (float)PVZ_T();
            local_18 = 3;
            local_24 = (float)((*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - iVar22) + -2) + 1.0 +
                       local_24;
            local_20 = local_24 + 1.0;
            local_30 = fVar23 + 15.0;
            local_2c = fVar25;
            pPVar18 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
            Plant::addRelocationEvent(pPVar18,(RelocationEvent *)&local_38);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
          }
        }
      }
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      iVar8 = *(int *)(this_00 + 0xf8);
      iVar22 = iVar9;
    } while (iVar8 + -3 <= iVar9);
  }
  iVar8 = iVar8 - *(int *)(this + 0x28);
  while (iVar22 = iVar8, 0 < iVar22) {
    iVar8 = iVar22 + -1;
    pPVar12 = (PlantGroup *)Board::GetPlantGroupAt(*(Board **)(gLawnApp + 0x9f0),iVar8,iVar26);
    if (pPVar12 != (PlantGroup *)0x0) {
      puVar13 = (undefined8 *)PlantGroup::Plants();
      local_68 = FUN_04f55298(*puVar13);
      local_38 = FUN_04f552e8(puVar13[1]);
      while (bVar5 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_68,(__normal_iterator *)&local_38),
            bVar5) {
        pRVar14 = (RtWeakPtrBase *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_70,pRVar14);
        cVar6 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_70);
        if (cVar6 != '\0') {
          uVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          cVar6 = Plant::HasCondition(uVar15,0x22);
          if (cVar6 != '\0') goto LAB_04f58bb0;
          uVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          cVar6 = Plant::HasCondition(uVar15,0x21);
          if (cVar6 != '\0') goto LAB_04f58bb0;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
      }
      cVar6 = PlantGroup::CanAttackRelocateGroup(pPVar12,(BoardEntity *)0x0);
      if (cVar6 != '\0') {
        local_68 = FUN_04f55298(*puVar13);
        local_38 = FUN_04f552e8(puVar13[1]);
        bVar24 = false;
        bVar21 = false;
        bVar5 = false;
        while (bVar7 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_68,(__normal_iterator *)&local_38),
              bVar7) {
          pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
          pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar16);
          cVar6 = PlantTurnip::WhetherCanBePulled
                            ((Plant *)pRVar19,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
          if (cVar6 == '\0') {
            bVar5 = true;
          }
          pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar16);
          cVar6 = PlantMagicbeans::WhetherCanBePulled
                            ((Plant *)pRVar19,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
          if (cVar6 == '\0') {
            bVar24 = true;
          }
          pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar16);
          cVar6 = PlantNightcap::WhetherCanBePulled
                            ((Plant *)pRVar19,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
          if (cVar6 == '\0') {
            bVar21 = true;
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
        }
        if ((bVar5) || (bVar24)) break;
        if (!bVar21) {
          local_78 = FUN_04f55298(*puVar13);
          local_70 = FUN_04f552e8(puVar13[1]);
          while (bVar5 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70),
                bVar5) {
            pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
            lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
            pcVar20 = *(code **)(**(long **)(lVar17 + 0xa8) + 0x440);
            if (pcVar20 != PlantFramework::stopSpecialEffect) {
              (*pcVar20)();
            }
            p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
            puVar13 = (undefined8 *)
                      std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var10);
            fVar2 = *(float *)((long)puVar13 + 4);
            uVar3 = *puVar13;
            uVar15 = *puVar13;
            RelocationEvent::RelocationEvent((RelocationEvent *)&local_68);
            local_68 = uVar15;
            local_54 = PVZ_T();
            local_50 = (float)PVZ_T();
            local_50 = local_50 + 1.0;
            local_48 = 5;
            local_60 = (float)local_68 + 8.0;
            local_5c = local_68._4_4_;
            pPVar18 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
            Plant::addRelocationEvent(pPVar18,(RelocationEvent *)&local_68);
            RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
            local_38 = uVar3;
            local_24 = (float)PVZ_T();
            local_24 = local_24 + 1.0;
            local_20 = local_24 + (float)*(int *)(this + 0x28);
            iVar9 = BoardTransforms::GridToBoardSpaceX(iVar22 + *(int *)(this + 0x28) + -1);
            local_30 = (float)iVar9;
            local_18 = 1;
            local_1c = 1;
            local_2c = fVar2;
            pPVar18 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
            Plant::addRelocationEvent(pPVar18,(RelocationEvent *)&local_38);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
          }
        }
      }
    }
  }
  goto LAB_04f58bb8;
LAB_04f58bb0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
LAB_04f58bb8:
  iVar26 = iVar26 + 1;
  if (*(int *)(this + 0x30) < iVar26) {
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_04f58ab0;
}


/* ZombossHydraPullActionHandler::~ZombossHydraPullActionHandler() */

void __thiscall
ZombossHydraPullActionHandler::~ZombossHydraPullActionHandler(ZombossHydraPullActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1e4d0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x38));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossHydraPullActionHandler::~ZombossHydraPullActionHandler() */

void __thiscall
ZombossHydraPullActionHandler::~ZombossHydraPullActionHandler(ZombossHydraPullActionHandler *this)

{
  ~ZombossHydraPullActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraPullActionHandler::onFanPullStartEnded(std::string const&) */

void __thiscall
ZombossHydraPullActionHandler::onFanPullStartEnded
          (ZombossHydraPullActionHandler *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar3;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar4;
  long lVar5;
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [16];
  string asStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"suction_on");
  if (bVar1) {
    onBlackHoleInAnimCompleted(this);
    ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    nop();
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
    std::string::string(asStack_68,"onFanPullStartEnded");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_78,
               asStack_68);
    ZombieAnimRig_ZombossMech_Hydra::PlayFanPullLoop(pZVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtId::~RtId(aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)aRStack_78,"POPANIM_EFFECTS_ZOMBOSS_HYDRA_EFFECT");
    GetPAMByName((string *)aRStack_78);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    std::string::~string((string *)aRStack_78);
    nop();
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_68);
    std::string::string((string *)aRStack_78,"f");
    AnimationSequence::AddSingleAnimation(asStack_68,aRStack_78,0);
    std::string::~string((string *)aRStack_78);
    nop();
    std::string::string((string *)aRStack_78,"f");
    AnimationSequence::AddSingleAnimation(asStack_68,aRStack_78,0);
    std::string::~string((string *)aRStack_78);
    nop();
    lVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this_00);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_78,330.0,*(float *)(lVar5 + 4),0.0);
    iVar2 = (**(code **)(*(long *)this_00 + 0x170))(this_00);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_78,iVar2 + -1);
    Effect_PopAnim::SetCentered(this_01,true);
    Effect_PopAnim::PlayAnimationSequence(this_01,(AnimationSequence *)asStack_68);
    AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraPullActionHandler::dragPlantsToblackHoleDirection(int) */

void __thiscall
ZombossHydraPullActionHandler::dragPlantsToblackHoleDirection
          (ZombossHydraPullActionHandler *this,int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  PlantGroup *this_00;
  undefined8 *puVar8;
  ResourceInfo *pRVar9;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar10;
  long lVar11;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  Plant *this_02;
  code *pcVar12;
  int iVar13;
  int iVar14;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  float local_30;
  undefined4 local_2c;
  undefined4 local_24;
  float local_20;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < param_1) {
    setPlantingStatus(this,true);
    *(int *)(this + 0x28) = param_1;
    iVar14 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
    if (iVar14 < param_1) {
      *(int *)(this + 0x28) = iVar14;
    }
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_BlackHole_Appear");
    iVar14 = *(int *)(this + 0x30) + -1;
    do {
      iVar13 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
      while (0 < iVar13) {
        while( true ) {
          iVar13 = iVar13 + -1;
          this_00 = (PlantGroup *)
                    Board::GetPlantGroupAt(*(Board **)(gLawnApp + 0x9f0),iVar13,iVar14);
          if ((this_00 == (PlantGroup *)0x0) ||
             (cVar3 = PlantGroup::CanAttackRelocateGroup(this_00,(BoardEntity *)0x0), cVar3 == '\0')
             ) break;
          bVar5 = false;
          bVar2 = false;
          puVar8 = (undefined8 *)PlantGroup::Plants();
          local_40 = FUN_04f55298(*puVar8);
          local_38 = FUN_04f552e8(puVar8[1]);
          while (bVar4 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
                bVar4) {
            pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
            pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar10);
            cVar3 = PlantTurnip::WhetherCanBePulled
                              ((Plant *)pRVar9,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
            if (cVar3 == '\0') {
              bVar2 = true;
            }
            pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar10);
            cVar3 = PlantMagicbeans::WhetherCanBePulled
                              ((Plant *)pRVar9,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1);
            if (cVar3 == '\0') {
              bVar5 = true;
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
          }
          if ((bVar5) || (bVar2)) goto LAB_04f5adfc;
          local_48 = FUN_04f55298(*puVar8);
          local_40 = FUN_04f552e8(puVar8[1]);
          while (bVar5 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
                bVar5) {
            pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
            pcVar12 = *(code **)(**(long **)(lVar11 + 0xa8) + 0x440);
            if (pcVar12 != PlantFramework::stopSpecialEffect) {
              (*pcVar12)();
            }
            this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
            lVar11 = std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(this_01);
            uVar1 = *(undefined4 *)(lVar11 + 4);
            RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
            iVar6 = BoardTransforms::GridToBoardSpaceX(iVar13);
            local_38 = CONCAT44(uVar1,(float)iVar6);
            local_24 = PVZ_T();
            local_20 = (float)PVZ_T();
            local_20 = local_20 + 1.0;
            local_18 = 4;
            local_30 = (float)local_38 + 8.0;
            local_2c = local_38._4_4_;
            this_02 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
            Plant::addRelocationEvent(this_02,(RelocationEvent *)&local_38);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
          }
          if (iVar13 < 1) goto LAB_04f5adfc;
        }
      }
LAB_04f5adfc:
      iVar14 = iVar14 + 1;
    } while (iVar14 <= *(int *)(this + 0x30));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraPullActionHandler::beginPlantSuction() */

void __thiscall
ZombossHydraPullActionHandler::beginPlantSuction(ZombossHydraPullActionHandler *this)

{
  long *plVar1;
  undefined8 local_20;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  (**(code **)(*plVar1 + 400))(&local_18);
  Sexy::Point::Point((Point *)&local_20,local_18,local_14 + 1);
  *(undefined8 *)(this + 0x2c) = local_20;
  dragPlantsToblackHoleDirection(this,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraPullActionHandler::onStartAction() */

void __thiscall ZombossHydraPullActionHandler::onStartAction(ZombossHydraPullActionHandler *this)

{
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  ZombieZombossMech::ResetPlantfoodDamageCounter(this_00);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFanPullStartEnded");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Hydra::PlayFanPullStart
            ((ZombieAnimRig_ZombossMech_Hydra *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  beginPlantSuction(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraPullActionHandler::beginSuction() */

void __thiscall ZombossHydraPullActionHandler::beginSuction(ZombossHydraPullActionHandler *this)

{
  long *plVar1;
  undefined8 uStack_20;
  int iStack_18;
  int iStack_14;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  plVar1 = (long *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  (**(code **)(*plVar1 + 400))(&iStack_18);
  Sexy::Point::Point((Point *)&uStack_20,iStack_18,iStack_14 + 1);
  *(undefined8 *)(this + 0x2c) = uStack_20;
  dragPlantsToblackHoleDirection(this,2);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

