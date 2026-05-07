// Class: ZombieJalapeno


/* ZombieJalapeno::ZombieJalapeno() */

void __thiscall ZombieJalapeno::ZombieJalapeno(ZombieJalapeno *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06a01900;
  *(undefined ***)(this + 0x10) = &PTR__ZombieJalapeno_06a02330;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x808));
  return;
}


/* ZombieJalapeno::~ZombieJalapeno() */

void __thiscall ZombieJalapeno::~ZombieJalapeno(ZombieJalapeno *this)

{
  *(undefined ***)this = &PTR_GetClass_06a01900;
  *(undefined ***)(this + 0x10) = &PTR__ZombieJalapeno_06a02330;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x808));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieJalapeno::~ZombieJalapeno() */

void __thiscall ZombieJalapeno::~ZombieJalapeno(ZombieJalapeno *this)

{
  ~ZombieJalapeno(this + -0x10);
  return;
}


/* ZombieJalapeno::~ZombieJalapeno() */

void __thiscall ZombieJalapeno::~ZombieJalapeno(ZombieJalapeno *this)

{
  ~ZombieJalapeno(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieJalapeno::~ZombieJalapeno() */

void __thiscall ZombieJalapeno::~ZombieJalapeno(ZombieJalapeno *this)

{
  ~ZombieJalapeno(this + -0x10);
  return;
}


/* ZombieJalapeno::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

bool ZombieJalapeno::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"");
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieJalapeno::Explode() */

void __thiscall ZombieJalapeno::Explode(ZombieJalapeno *this)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar6;
  RtClass *pRVar7;
  EffectAnimRig_JackOLanternFireSquare *this_01;
  int iVar8;
  RtWeakPtr aRStack_28 [8];
  int local_20;
  int local_1c;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_EFFECTS_JALAPENO_FIRE");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  fVar3 = _FUN_04eec540;
  if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8)) {
    iVar8 = 0;
    do {
      iVar4 = SharkMinion::getRow((SharkMinion *)this);
      Sexy::Point::Point((Point *)asStack_18,iVar8,iVar4);
      BoardTransforms::GridToBoardSpace((Point *)asStack_18);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
      pRVar7 = (RtClass *)EffectAnimRig_JalapenoFireSquare::StaticGetClass();
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,pRVar7);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)local_20,(float)(local_1c + -0x1e),0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)asStack_18,-1);
      Effect_PopAnim::SetCentered(this_00,true);
      uVar5 = SharkMinion::getRow((SharkMinion *)this);
      uVar5 = Board::MakeRenderOrder(0x65130,uVar5,1);
      FUN_04eebc44(this_00 + 0x1c,uVar5);
      UIWidget::GetAtlasImage((UIWidget *)this_00);
      nop();
      iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
      uVar1 = iVar8 - iVar4;
      iVar8 = iVar8 + 1;
      uVar2 = (int)uVar1 >> 0x1f;
      EffectAnimRig_JackOLanternFireSquare::SetFireDelay
                (this_01,(float)(int)((uVar1 ^ uVar2) - uVar2) * fVar3);
      EffectAnimRig_JackOLanternFireSquare::SetOwningEffect(this_01,this_00);
    } while (iVar8 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
  }
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x804) = 0xffffffff;
  *(undefined4 *)(this + 0x800) = uVar5;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x808));
  MessageRouter::Post((_func_void *)gMessageRouter);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieJalapeno::StaticNew() */

ZombieJalapeno * ZombieJalapeno::StaticNew(void)

{
  ZombieJalapeno *this;
  
  this = ::operator_new(0x820);
  ZombieJalapeno(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieJalapeno::specialExplode() */

void __thiscall ZombieJalapeno::specialExplode(ZombieJalapeno *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ZombieJalapenoProps *pZVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  Plant *this_00;
  BoardEntity **ppBVar14;
  Zombie *pZVar15;
  long lVar16;
  undefined8 uVar17;
  RtObject *this_01;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 local_80;
  undefined8 local_78;
  Insets aIStack_68 [8];
  undefined4 local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar18 = 0;
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  iVar4 = SharkMinion::getRow((SharkMinion *)this);
  iVar5 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar6 = operator|(1,2);
  iVar7 = SharkMinion::getRow((SharkMinion *)this);
  iVar8 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_68,0,iVar7,iVar8,1);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar6,
             aIStack_68);
  pZVar9 = Zombie::GetProps<ZombieJalapenoProps>((Zombie *)this);
  uVar19 = local_80;
  uVar6 = *(undefined4 *)(pZVar9 + 0x210);
  uVar10 = FUN_04eebc54(local_80,local_78);
  if (uVar10 != 0) {
    do {
      uVar17 = *(undefined8 *)(this + 0x808);
      lVar11 = FUN_04eebc54(uVar17,*(undefined8 *)(this + 0x810));
      puVar12 = (undefined8 *)FUN_04eebc60(uVar19,uVar18);
      this_01 = (RtObject *)*puVar12;
      lVar16 = 0;
      do {
        if (lVar16 == lVar11) {
          this_00 = Sexy::RtObject::Cast<Plant>(this_01);
          if (this_00 == (Plant *)0x0) {
            puVar12 = (undefined8 *)FUN_04eebc60(local_80,uVar18);
            pZVar15 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar12);
            cVar3 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pZVar15);
            if ((this != (ZombieJalapeno *)pZVar15) && (cVar3 != '\0')) {
              DamageInfo::DamageInfo((DamageInfo *)aIStack_68);
              local_60 = uVar6;
              SetFlag<DamageTypeFlags>(auStack_58,0x400,1);
              (**(code **)(*(long *)pZVar15 + 0x110))(pZVar15,aIStack_68);
              ppBVar14 = (BoardEntity **)FUN_04eebc60(local_80,uVar18);
              std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x808),
                         ppBVar14);
              DamageInfo::~DamageInfo((DamageInfo *)aIStack_68);
            }
          }
          else {
            cVar3 = Plant::IsIgnoreControlAndDmg(this_00);
            if (cVar3 == '\0') {
              Plant::KillPlant(this_00,0,1,0x400);
              ppBVar14 = (BoardEntity **)FUN_04eebc60(local_80,uVar18);
              std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x808),
                         ppBVar14);
            }
          }
          uVar19 = local_80;
          uVar10 = FUN_04eebc54(local_80,local_78);
          break;
        }
        plVar13 = (long *)FUN_04eebc60(uVar17,lVar16);
        lVar16 = lVar16 + 1;
      } while ((RtObject *)*plVar13 != this_01);
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar10);
  }
  iVar7 = *(int *)(this + 0x804);
  if ((((iVar5 - iVar7 < -1) && (iVar1 + 1 < iVar5 + iVar7)) && (iVar4 - iVar7 < -1)) &&
     (iVar2 + 1 < iVar4 + iVar7)) {
    Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieJalapeno::onEnterState_Explode(ZombieState) */

void ZombieJalapeno::onEnterState_Explode(ZombieJalapeno *param_1)

{
  char cVar1;
  
  Explode(param_1);
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
  cVar1 = Zombie::IsIZombie((Zombie *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  specialExplode(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieJalapeno::updateState_Explode() */

void __thiscall ZombieJalapeno::updateState_Explode(ZombieJalapeno *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ZombieJalapenoProps *pZVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  Plant *this_00;
  BoardEntity **ppBVar14;
  Zombie *pZVar15;
  long lVar16;
  undefined8 uVar17;
  int iVar18;
  RtObject *this_01;
  ulong uVar19;
  undefined8 uVar20;
  float fVar21;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  int local_68 [2];
  undefined4 local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Zombie::IsIZombie((Zombie *)this);
  if (cVar2 == '\0') {
    local_88 = -1;
    iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
    local_84 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + 1;
    iVar3 = SharkMinion::getRow((SharkMinion *)this);
    iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    fVar21 = (float)PVZ_T();
    iVar6 = *(int *)(this + 0x804);
    iVar18 = (int)((fVar21 - *(float *)(this + 0x800)) * 13.333333);
    if (iVar6 < iVar18) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      iVar6 = *(int *)(this + 0x804);
      if (iVar6 < iVar18) {
        uVar5 = operator|(1,2);
        do {
          iVar6 = iVar6 + 1;
          local_68[0] = iVar4 - iVar6;
          *(int *)(this + 0x804) = iVar6;
          piVar8 = eastl::max_alt<int>(local_68,&local_88);
          iVar7 = *piVar8;
          local_68[0] = iVar4 + iVar6;
          piVar8 = eastl::min_alt<int>(local_68,&local_84);
          iVar6 = *piVar8;
          cVar2 = Zombie::IsIZombie((Zombie *)this);
          if (cVar2 == '\0') {
            Sexy::Insets::Insets((Insets *)local_68,iVar7,iVar3,iVar6 - iVar7,1);
          }
          else {
            iVar6 = SharkMinion::getRow((SharkMinion *)this);
            iVar7 = BoardConstants::NUMBER_OF_COLUMNS();
            Sexy::Insets::Insets((Insets *)local_68,0,iVar6,iVar7,1);
          }
          EntityFinder::GetEntitiesInGridSquares
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,
                     uVar5,(Insets *)local_68);
          iVar6 = *(int *)(this + 0x804);
        } while (iVar6 < iVar18);
      }
      pZVar9 = Zombie::GetProps<ZombieJalapenoProps>((Zombie *)this);
      uVar20 = local_80;
      uVar5 = *(undefined4 *)(pZVar9 + 0x210);
      uVar10 = FUN_04eebc54(local_80,local_78);
      for (uVar19 = 0; uVar19 < uVar10; uVar19 = uVar19 + 1) {
        uVar17 = *(undefined8 *)(this + 0x808);
        lVar11 = FUN_04eebc54(uVar17,*(undefined8 *)(this + 0x810));
        puVar12 = (undefined8 *)FUN_04eebc60(uVar20,uVar19);
        this_01 = (RtObject *)*puVar12;
        lVar16 = 0;
        do {
          if (lVar16 == lVar11) {
            this_00 = Sexy::RtObject::Cast<Plant>(this_01);
            if (this_00 == (Plant *)0x0) {
              puVar12 = (undefined8 *)FUN_04eebc60(local_80,uVar19);
              pZVar15 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar12);
              cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pZVar15);
              if ((this != (ZombieJalapeno *)pZVar15) && (cVar2 != '\0')) {
                DamageInfo::DamageInfo((DamageInfo *)local_68);
                local_60 = uVar5;
                SetFlag<DamageTypeFlags>(auStack_58,0x400,1);
                (**(code **)(*(long *)pZVar15 + 0x110))(pZVar15,(DamageInfo *)local_68);
                ppBVar14 = (BoardEntity **)FUN_04eebc60(local_80,uVar19);
                std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x808),
                           ppBVar14);
                DamageInfo::~DamageInfo((DamageInfo *)local_68);
              }
            }
            else {
              cVar2 = Plant::IsIgnoreControlAndDmg(this_00);
              if (cVar2 == '\0') {
                Plant::KillPlant(this_00,0,1,0x400);
                ppBVar14 = (BoardEntity **)FUN_04eebc60(local_80,uVar19);
                std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x808),
                           ppBVar14);
              }
            }
            uVar20 = local_80;
            uVar10 = FUN_04eebc54(local_80,local_78);
            break;
          }
          plVar13 = (long *)FUN_04eebc60(uVar17,lVar16);
          lVar16 = lVar16 + 1;
        } while ((RtObject *)*plVar13 != this_01);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
      iVar6 = *(int *)(this + 0x804);
    }
    if ((((iVar4 - iVar6 < -1) && (local_84 < iVar4 + iVar6)) && (iVar3 - iVar6 < -1)) &&
       (iVar1 + 1 < iVar3 + iVar6)) {
      Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieJalapeno::StaticClassInit() */

void ZombieJalapeno::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieJalapeno");
      (*pcVar4)(plVar1,asStack_150,FUN_04eed28c,0x820,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieJalapeno,void(ZombieJalapeno::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieJalapeno,void(ZombieJalapeno::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieJalapeno,void(ZombieJalapeno::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Jalapeno_Explode");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04eed030(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieJalapeno::StaticGetClass() */

long * ZombieJalapeno::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieJalapeno",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieJalapeno::GetClass() const */

long * ZombieJalapeno::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieJalapeno",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieJalapeno::onZombieInitialize() */

void __thiscall ZombieJalapeno::onZombieInitialize(ZombieJalapeno *this)

{
  undefined4 uVar1;
  
  Zombie::onZombieInitialize((Zombie *)this);
  *(undefined4 *)(this + 0x804) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x800) = uVar1;
  return;
}


/* ZombieJalapeno::DropHead() */

long * __thiscall ZombieJalapeno::DropHead(ZombieJalapeno *this)

{
  long *plVar1;
  
  plVar1 = (long *)Zombie::DropHead((Zombie *)this);
  (**(code **)(*plVar1 + 0x80))(plVar1,1);
  return plVar1;
}


/* ZombieJalapeno::updateState_Eat() */

void __thiscall ZombieJalapeno::updateState_Eat(ZombieJalapeno *this)

{
  Zombie::updateState_Eat((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}

