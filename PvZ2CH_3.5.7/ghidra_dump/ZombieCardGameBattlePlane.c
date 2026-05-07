// Class: ZombieCardGameBattlePlane


/* ZombieCardGameBattlePlane::ZombieCardGameBattlePlane() */

void __thiscall
ZombieCardGameBattlePlane::ZombieCardGameBattlePlane(ZombieCardGameBattlePlane *this)

{
  ZombieSkycityBattlePlane::ZombieSkycityBattlePlane((ZombieSkycityBattlePlane *)this);
  *(undefined ***)this = &PTR_GetClass_068db2d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCardGameBattlePlane_068dbd60;
  return;
}


/* ZombieCardGameBattlePlane::StaticNew() */

ZombieCardGameBattlePlane * ZombieCardGameBattlePlane::StaticNew(void)

{
  ZombieCardGameBattlePlane *this;
  
  this = ::operator_new(0x888);
  ZombieCardGameBattlePlane(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameBattlePlane::StaticClassInit() */

void ZombieCardGameBattlePlane::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieCardGameBattlePlane");
    (*pcVar2)(plVar1,asStack_10,FUN_0479ad20,0x888,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCardGameBattlePlane::StaticGetClass() */

long * ZombieCardGameBattlePlane::StaticGetClass(void)

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
  uVar2 = ZombieSkycityBattlePlane::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCardGameBattlePlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCardGameBattlePlane::GetClass() const */

long * ZombieCardGameBattlePlane::GetClass(void)

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
  uVar2 = ZombieSkycityBattlePlane::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCardGameBattlePlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameBattlePlane::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieCardGameBattlePlane::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ZombieSkycityBattlePlaneProps *pZVar6;
  SexyVector3 *this;
  long lVar7;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar8;
  long lVar9;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  Board *pBVar14;
  float fVar15;
  undefined8 uVar16;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  uVar4 = operator|(1,4);
  cVar2 = LawnApp::IsInModule(pLVar1,uVar4);
  if (cVar2 == '\0') {
    bVar3 = std::operator==(param_3,"attack");
    if (bVar3) {
      bVar3 = std::operator==(param_4,"use_action");
      if (bVar3) {
        pZVar6 = Zombie::GetProps<ZombieSkycityBattlePlaneProps>((Zombie *)param_1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  (aRStack_30,(RtWeakPtrBase *)(pZVar6 + 0x230));
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
        if (cVar2 != '\0') {
          this = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_1);
          uVar4 = 0;
          fVar13 = 1.0;
          uVar16 = 0xc1200000;
          EATextSquish::Vec3::Vec3(aVStack_18,60.0,-10.0,0.0);
          pBVar14 = (Board *)Sexy::SexyVector3::operator+(this,(SexyVector3 *)aVStack_18);
          uVar11 = *(undefined8 *)(gLawnApp + 0x9f0);
          local_28 = SUB84(pBVar14,0);
          local_24 = (undefined4)uVar16;
          local_20 = uVar4;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aVStack_18,(RtWeakPtrBase *)aRStack_30);
          lVar7 = Board::AddProjectile(pBVar14,uVar16,0,uVar11,aVStack_18,param_1,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
          std::string::string((string *)aVStack_18,"Play_Asparagus_Attack");
          RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aVStack_18,0.0);
          std::string::~string((string *)aVStack_18);
          nop();
          cVar2 = Zombie::HasCondition(param_1,0x41);
          if (cVar2 != '\0') {
            this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
            if (this_01 == (PlayerInfo *)0x0) {
LAB_0479b520:
              pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
              lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
              fVar12 = *(float *)(lVar9 + 0x1c4);
            }
            else {
              std::string::string((string *)aVStack_18,"shrinkingviolet");
              iVar5 = PlayerInfo::GetEquipAvatarID(this_01,(string *)aVStack_18);
              std::string::~string((string *)aVStack_18);
              nop();
              if (iVar5 == -1) goto LAB_0479b520;
              pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
              lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
              fVar12 = *(float *)(lVar9 + 0x1c8);
            }
            fVar13 = (float)FUN_04798244(*(undefined4 *)(lVar7 + 0xc0));
            fVar13 = fVar13 * fVar12;
            FUN_0479823c(fVar13,(undefined4 *)(lVar7 + 0xc0));
          }
          cVar2 = Zombie::HasCondition(param_1,0x60);
          if (cVar2 != '\0') {
            pEVar8 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                     Zombie::GetConditionTracker((Zombie *)param_1);
            lVar9 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar8,0x60);
            fVar15 = *(float *)(lVar9 + 0xc);
            fVar12 = (float)FUN_04798244(*(undefined4 *)(lVar7 + 0xc0));
            FUN_0479823c(fVar13 * fVar15 * fVar12,(undefined4 *)(lVar7 + 0xc0));
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        goto LAB_0479b2c8;
      }
    }
  }
  ZombieSkycityBattlePlane::onPopAnimCommand(param_1,param_2,param_3,param_4);
LAB_0479b2c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCardGameBattlePlane::~ZombieCardGameBattlePlane() */

void __thiscall
ZombieCardGameBattlePlane::~ZombieCardGameBattlePlane(ZombieCardGameBattlePlane *this)

{
  *(undefined ***)this = &PTR_GetClass_068db2d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCardGameBattlePlane_068dbd60;
  ZombieSkycityBattlePlane::~ZombieSkycityBattlePlane((ZombieSkycityBattlePlane *)this);
  return;
}


/* non-virtual thunk to ZombieCardGameBattlePlane::~ZombieCardGameBattlePlane() */

void __thiscall
ZombieCardGameBattlePlane::~ZombieCardGameBattlePlane(ZombieCardGameBattlePlane *this)

{
  ~ZombieCardGameBattlePlane(this + -0x10);
  return;
}


/* ZombieCardGameBattlePlane::~ZombieCardGameBattlePlane() */

void __thiscall
ZombieCardGameBattlePlane::~ZombieCardGameBattlePlane(ZombieCardGameBattlePlane *this)

{
  ~ZombieCardGameBattlePlane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCardGameBattlePlane::~ZombieCardGameBattlePlane() */

void __thiscall
ZombieCardGameBattlePlane::~ZombieCardGameBattlePlane(ZombieCardGameBattlePlane *this)

{
  ~ZombieCardGameBattlePlane(this + -0x10);
  return;
}

