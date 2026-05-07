// Class: RocketZombieFlickModule


/* RocketZombieFlickModule::cancelTouch() */

void __thiscall RocketZombieFlickModule::cancelTouch(RocketZombieFlickModule *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RocketZombieFlickModule::StaticClassInit() */

void RocketZombieFlickModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"RocketZombieFlickModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04707d44,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RocketZombieFlickModule::StaticGetClass() */

long * RocketZombieFlickModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"RocketZombieFlickModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RocketZombieFlickModule::RocketZombieFlickModule() */

void __thiscall RocketZombieFlickModule::RocketZombieFlickModule(RocketZombieFlickModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_068bd420;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x20));
  return;
}


/* RocketZombieFlickModule::StaticNew() */

RocketZombieFlickModule * RocketZombieFlickModule::StaticNew(void)

{
  RocketZombieFlickModule *this;
  
  this = ::operator_new(0x28);
  RocketZombieFlickModule(this);
  return this;
}


/* RocketZombieFlickModule::~RocketZombieFlickModule() */

void __thiscall RocketZombieFlickModule::~RocketZombieFlickModule(RocketZombieFlickModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068bd420;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* RocketZombieFlickModule::~RocketZombieFlickModule() */

void __thiscall RocketZombieFlickModule::~RocketZombieFlickModule(RocketZombieFlickModule *this)

{
  ~RocketZombieFlickModule(this);
  AK::FreeHook(this);
  return;
}


/* RocketZombieFlickModule::isValidQTETarget(Zombie*) */

bool __thiscall
RocketZombieFlickModule::isValidQTETarget(RocketZombieFlickModule *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  ZombiePirateCannon *pZVar3;
  
  cVar2 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
  if ((((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar2 == '\0')
       ) && (cVar2 = Zombie::IsControlled(param_1), cVar2 == '\0')) &&
     (cVar2 = Zombie::IsFlickedOff(param_1), cVar2 == '\0')) {
    pZVar3 = Sexy::RtObject::Cast<ZombiePirateCannon>((RtObject *)param_1);
    bVar1 = pZVar3 == (ZombiePirateCannon *)0x0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RocketZombieFlickModule::registerForEvents() */

void __thiscall RocketZombieFlickModule::registerForEvents(RocketZombieFlickModule *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<RocketZombieFlickModule,bool(RocketZombieFlickModule::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<RocketZombieFlickModule,void(RocketZombieFlickModule::*)()>
            (aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,0,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RocketZombieFlickModule::findQTEZombie(Sexy::SexyVector2 const&, Sexy::SexyVector2 const&,
   std::vector<Zombie*, std::allocator<Zombie*> >&) */

void __thiscall
RocketZombieFlickModule::findQTEZombie
          (RocketZombieFlickModule *this,SexyVector2 *param_1,SexyVector2 *param_2,vector *param_3)

{
  Zombie *pZVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar6;
  long extraout_x0;
  Insets *pIVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_70;
  float local_6c;
  Zombie *local_68;
  int local_60;
  int local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  Sexy::Insets::Insets(aIStack_40,(int)*(float *)param_1,(int)*(float *)(param_1 + 4),1,1);
  fVar11 = *(float *)param_2;
  Sexy::TRect<int>::ExpandToContain
            ((TRect<int> *)aIStack_40,(int)fVar11,(int)*(float *)(param_2 + 4));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,aIStack_40
             ,0xfffffffe,7);
  local_70 = Sexy::SexyVector2::operator-(param_2,param_1);
  local_6c = fVar11;
  fVar11 = (float)DVec2::dot((DVec2 *)&local_70,(DVec2 *)&local_70);
  uVar9 = local_20;
  uVar4 = FUN_04705f44(local_20,local_18);
  if (uVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_04705f50(uVar9,uVar8);
      local_68 = (Zombie *)*puVar5;
      if (local_68 != (Zombie *)0x0) {
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(local_68);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        bVar2 = std::operator==((string *)(lVar6 + 8),"kongfu_rocket");
        if ((((bVar2) && (bVar2 = Sexy::RtObject::IsA<ZombieRocket>((RtObject *)local_68), bVar2))
            && (cVar3 = Zombie::IsFlying(local_68), pZVar1 = local_68, cVar3 != '\0')) &&
           (nop(), *(char *)(extraout_x0 + 0x800) == '\0')) {
          pIVar7 = (Insets *)(**(code **)(*(long *)pZVar1 + 0x178))(pZVar1);
          Sexy::Insets::Insets(aIStack_30,pIVar7);
          Sexy::TRect<int>::GetCenter();
          Sexy::Point::Point((Point *)&local_60,(TPoint *)&local_48);
          fVar12 = (float)local_5c;
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,(float)local_60,fVar12);
          local_58 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,param_1);
          local_54 = fVar12;
          fVar10 = (float)DVec2::dot((DVec2 *)&local_70,(DVec2 *)&local_58);
          local_50 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_70,fVar10 * (1.0 / fVar11));
          local_4c = fVar12;
          local_48 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_58,(SexyVector2 *)&local_50)
          ;
          local_44 = fVar12;
          fVar10 = (float)VectorNorm((FPoint *)&local_48);
          cVar3 = Zombie::IsControlled(local_68);
          if (cVar3 == '\0') {
            fVar12 = 1600.0;
          }
          else {
            fVar12 = 6400.0;
          }
          if ((fVar10 <= fVar12) && (cVar3 = isValidQTETarget(this,local_68), cVar3 != '\0')) {
            std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                      ((vector<Zombie*,std::allocator<Zombie*>> *)param_3,&local_68);
            break;
          }
        }
        uVar9 = local_20;
        uVar4 = FUN_04705f44(local_20,local_18);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RocketZombieFlickModule::QTEFlick(Sexy::SexyVector2 const&) */

void RocketZombieFlickModule::QTEFlick(SexyVector2 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  Effect_PopAnim *this;
  ResourceInfo *pRVar3;
  ZombieRocket *this_00;
  ulong uVar4;
  undefined8 *puVar5;
  SexyVector2 *in_x1;
  ulong uVar6;
  float fVar7;
  float in_s1;
  int local_50;
  int local_4c;
  string asStack_48 [8];
  float local_40;
  float local_3c;
  undefined4 local_30 [4];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar6 = 0;
  local_30[0] = Sexy::SexyVector2::operator+(param_1 + 0x20,in_x1);
  findQTEZombie((RocketZombieFlickModule *)param_1,param_1 + 0x20,(SexyVector2 *)local_30,
                (vector *)&local_20);
  do {
    uVar1 = local_20;
    uVar4 = FUN_04705f64(local_20,local_18);
    if (uVar4 <= uVar6) {
      std::vector<Zombie*,std::allocator<Zombie*>>::~vector
                ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar5 = (undefined8 *)FUN_04705f70(uVar1,uVar6);
    (**(code **)(*(long *)*puVar5 + 0x178))((long *)*puVar5);
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)&local_50,(TPoint *)local_30);
    DVec3::DVec3((DVec3 *)&local_40);
    fVar7 = (float)Sexy::SexyVector2::Normalize(in_x1);
    if (fVar7 <= 0.5) {
      if (fVar7 < -0.5) {
        iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
        local_40 = local_40 - (float)iVar2;
      }
      if (in_s1 <= 0.5) goto LAB_0470b3e0;
LAB_0470b594:
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      local_3c = (float)iVar2 + local_3c;
    }
    else {
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      local_40 = (float)iVar2 + local_40;
      if (0.5 < in_s1) goto LAB_0470b594;
LAB_0470b3e0:
      if (in_s1 < -0.5) {
        iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
        local_3c = local_3c - (float)iVar2;
      }
    }
    uVar6 = uVar6 + 1;
    Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    nop();
    std::string::string(asStack_48,"POPANIM_EFFECTS_POWER_UP_ZOMBIE_FLICK");
    GetPAMByName(asStack_48);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_30);
    Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
    std::string::~string(asStack_48);
    nop();
    Effect_PopAnim::SetCentered(this,true);
    std::string::string((string *)local_30,"animation");
    Effect_PopAnim::PlaySingleAnimation(this,(RtWeakPtr *)local_30,0);
    std::string::~string((string *)local_30);
    nop();
    in_s1 = (float)local_4c;
    EATextSquish::Vec3::Vec3((Vec3 *)local_30,(float)local_50,in_s1,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_30,800000);
    Effect_PopAnim::SetOrientation(this,in_x1);
    nop();
    this_00[0x800] = (ZombieRocket)0x1;
    ZombieRocket::Land(this_00);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RocketZombieFlickModule::handleTouch(Sexy::Touch const&) */

void __thiscall RocketZombieFlickModule::handleTouch(RocketZombieFlickModule *this,Touch *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  FastCurve aFStack_18 [8];
  undefined4 local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x18) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    lVar5 = *(long *)param_1;
switchD_0470b6f8_caseD_0:
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    *(long *)(this + 0x18) = lVar5;
    iVar2 = FUN_047063ac(uVar1);
    iVar3 = FUN_047063ac(*(undefined4 *)(param_1 + 0x14));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar2,(float)iVar3);
    *(ulong *)(this + 0x20) = CONCAT44(fStack_c,local_10);
    uVar4 = 1;
  }
  else {
    lVar5 = *(long *)param_1;
    uVar4 = 0;
    if (*(long *)(this + 0x18) != lVar5) goto LAB_0470b698;
    switch(*(undefined4 *)(param_1 + 0x30)) {
    case 0:
      goto switchD_0470b6f8_caseD_0;
    case 1:
      iVar2 = FUN_047063ac(*(undefined4 *)(param_1 + 0x10));
      iVar3 = FUN_047063ac(*(undefined4 *)(param_1 + 0x14));
      fVar6 = (float)iVar3;
      Sexy::FastCurve::SetOutRange(aFStack_18,(float)iVar2,fVar6);
      local_10 = Sexy::SexyVector2::operator-
                           ((SexyVector2 *)aFStack_18,(SexyVector2 *)(this + 0x20));
      fStack_c = fVar6;
      fVar6 = (float)VectorNorm((FPoint *)&local_10);
      if (10000.0 < fVar6) {
        QTEFlick((SexyVector2 *)this);
        uVar4 = 1;
        break;
      }
    default:
      uVar4 = 1;
      break;
    case 3:
      iVar2 = FUN_047063ac(*(undefined4 *)(param_1 + 0x10));
      iVar3 = FUN_047063ac(*(undefined4 *)(param_1 + 0x14));
      fVar6 = (float)iVar3;
      Sexy::FastCurve::SetOutRange(aFStack_18,(float)iVar2,fVar6);
      local_10 = Sexy::SexyVector2::operator-
                           ((SexyVector2 *)aFStack_18,(SexyVector2 *)(this + 0x20));
      fStack_c = fVar6;
      fVar6 = (float)VectorNorm((FPoint *)&local_10);
      if (625.0 < fVar6) {
        QTEFlick((SexyVector2 *)this);
      }
    case 4:
      cancelTouch(this);
      uVar4 = 1;
    }
  }
LAB_0470b698:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

