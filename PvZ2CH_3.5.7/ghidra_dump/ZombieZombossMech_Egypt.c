// Class: ZombieZombossMech_Egypt


/* ZombieZombossMech_Egypt::OnZombieZombossDied(Zombie*, DamageInfo const*) */

void ZombieZombossMech_Egypt::OnZombieZombossDied(Zombie *param_1,DamageInfo *param_2)

{
  if (param_1 != (Zombie *)param_2) {
    return;
  }
  (**(code **)(*(long *)param_1 + 0x2f0))();
  return;
}


/* ZombieZombossMech_Egypt::~ZombieZombossMech_Egypt() */

void __thiscall ZombieZombossMech_Egypt::~ZombieZombossMech_Egypt(ZombieZombossMech_Egypt *this)

{
  *(undefined ***)this = &PTR_GetClass_068beec0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Egypt_068bfa80;
  ZombieZombossMech::~ZombieZombossMech((ZombieZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Egypt::~ZombieZombossMech_Egypt() */

void __thiscall ZombieZombossMech_Egypt::~ZombieZombossMech_Egypt(ZombieZombossMech_Egypt *this)

{
  ~ZombieZombossMech_Egypt(this + -0x10);
  return;
}


/* ZombieZombossMech_Egypt::~ZombieZombossMech_Egypt() */

void __thiscall ZombieZombossMech_Egypt::~ZombieZombossMech_Egypt(ZombieZombossMech_Egypt *this)

{
  ~ZombieZombossMech_Egypt(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Egypt::~ZombieZombossMech_Egypt() */

void __thiscall ZombieZombossMech_Egypt::~ZombieZombossMech_Egypt(ZombieZombossMech_Egypt *this)

{
  ~ZombieZombossMech_Egypt(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Egypt::StaticClassInit() */

void ZombieZombossMech_Egypt::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMech_Egypt");
    (*pcVar2)(plVar1,asStack_10,FUN_0471a43c,0x960,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_Egypt::StaticGetClass() */

long * ZombieZombossMech_Egypt::StaticGetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Egypt",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Egypt::GetClass() const */

long * ZombieZombossMech_Egypt::GetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Egypt",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Egypt::ZombieZombossMech_Egypt() */

void __thiscall ZombieZombossMech_Egypt::ZombieZombossMech_Egypt(ZombieZombossMech_Egypt *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  ZombieZombossMech::ZombieZombossMech((ZombieZombossMech *)this);
  *(undefined ***)this = &PTR_GetClass_068beec0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Egypt_068bfa80;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombieZombossDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<ZombieZombossMech_Egypt,void(ZombieZombossMech_Egypt::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  return;
}


/* ZombieZombossMech_Egypt::StaticNew() */

ZombieZombossMech_Egypt * ZombieZombossMech_Egypt::StaticNew(void)

{
  ZombieZombossMech_Egypt *this;
  
  this = ::operator_new(0x960);
  ZombieZombossMech_Egypt(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Egypt::tossGravestone(Sexy::Point const&, Sexy::Point const&) */

void __thiscall
ZombieZombossMech_Egypt::tossGravestone(ZombieZombossMech_Egypt *this,Point *param_1,Point *param_2)

{
  ZombieZombossMechEgyptProps *pZVar1;
  Projectile *this_00;
  TombraiserProjectile *this_01;
  undefined8 uVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpace(param_1);
  pZVar1 = Zombie::GetProps<ZombieZombossMechEgyptProps>((Zombie *)this);
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(pZVar1 + 0x2a8));
  this_00 = (Projectile *)
            Board::AddProjectile((Board *)(float)local_28,(float)local_24,0,uVar2,aRStack_18,this,0)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  nop();
  TombraiserProjectile::SetGridTarget(this_01,param_2);
  BoardTransforms::GridToBoardSpace(param_2);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_20,(float)local_1c,0.0);
  Projectile::LaunchAt(this_00,(SexyVector3 *)aRStack_18,250.0,1.5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Egypt::pickRandomSpacesFrom(int, std::vector<Sexy::Point,
   std::allocator<Sexy::Point> > const&, std::vector<Sexy::Point, std::allocator<Sexy::Point> >&)
   const */

void __thiscall
ZombieZombossMech_Egypt::pickRandomSpacesFrom
          (ZombieZombossMech_Egypt *this,int param_1,vector *param_2,vector *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Point *pPVar4;
  int iVar5;
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_20 [8];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(avStack_20,param_2);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar2,uVar3);
  if (0 < param_1) {
    iVar5 = 0;
    do {
      cVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty(avStack_20);
      if (cVar1 != '\0') break;
      iVar5 = iVar5 + 1;
      pPVar4 = (Point *)std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)avStack_20);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_3,pPVar4);
      FUN_0471a0f0(auStack_18);
    } while (iVar5 != param_1);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Egypt::OnRocketHitGround(ZombossRocket*) */

void __thiscall
ZombieZombossMech_Egypt::OnRocketHitGround(ZombieZombossMech_Egypt *this,ZombossRocket *param_1)

{
  int iVar1;
  bool bVar2;
  Point *pPVar3;
  undefined8 *puVar4;
  Plant *pPVar5;
  ZombieZombossMechProps *pZVar6;
  ZombieZombossMechProps *pZVar7;
  ZombieZombossMechEgyptProps *pZVar8;
  Point *pPVar9;
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (Point *)NetworkCacheQueue::getItemFragmentCache((NetworkCacheQueue *)param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  EntityFinder::GetEntitiesAtGridSquare
            (avStack_50,1,*(undefined4 *)pPVar3,*(undefined4 *)(pPVar3 + 4));
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
  while( true ) {
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_50);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_20);
    if (!bVar2) break;
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    pPVar5 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar4);
    if (pPVar5 != (Plant *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)aRStack_38);
      Plant::TakeSmashAttack(pPVar5,(RtWeakPtr<Sexy::SoundResource> *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
    FUN_0471a51c((exception_ptr *)&local_58);
  }
  pZVar6 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  pZVar7 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  ZombossRocket::CreateExplosionEffect
            (param_1,(string *)(pZVar6 + 0x220),(string *)(pZVar7 + 0x238));
  std::string::string((string *)local_20,"Play_Zomb_Egypt_Zomboss_Attack_Projectile_Impact");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)local_20,0.0);
  std::string::~string((string *)local_20);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_38);
  ZombieZombossMech_PVZ1_Robot::getFreeSpacesNear
            ((ZombieZombossMech_PVZ1_Robot *)this,pPVar3,(vector *)aRStack_38);
  pZVar8 = Zombie::GetProps<ZombieZombossMechEgyptProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar8 + 0x2a0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  pickRandomSpacesFrom(this,iVar1,(vector *)aRStack_38,(vector *)local_20);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_20);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)local_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2) {
    pPVar9 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    tossGravestone(this,pPVar3,pPVar9);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)aRStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Egypt::DropAllLoot() */

void __thiscall ZombieZombossMech_Egypt::DropAllLoot(ZombieZombossMech_Egypt *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  FestivalManager *pFVar7;
  undefined8 uVar8;
  WorldDataManager *this_00;
  string *psVar9;
  ActivityConfig *this_01;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var13;
  undefined8 *puVar14;
  ulong uVar15;
  float fVar16;
  bool local_69;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  float local_50 [4];
  DVec3 aDStack_40 [4];
  undefined4 local_3c;
  DVec3 aDStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar16 = (float)FUN_0471a0a8(*(undefined4 *)(this + 0x280));
  if ((((fVar16 <= 0.0) || (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 != '\0')) &&
      (cVar1 = Zombie::GetHasDroppedLoot((Zombie *)this), cVar1 == '\0')) &&
     ((lVar6 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar6 == 0 ||
      (lVar6 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
      *(char *)(lVar6 + 0x112) == '\0')))) {
    pFVar7 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
    uVar8 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    cVar1 = FestivalManager::IsFestivalLevel(pFVar7,uVar8,2);
    if (cVar1 == '\0') {
      this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      psVar9 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      lVar6 = WorldDataManager::FindWorldDataByLevelName(this_00,psVar9);
      if (lVar6 != 0) {
        Zombie::DropAllLoot((Zombie *)this);
      }
    }
    else {
      std::string::string(asStack_68,"spring_mode");
      nop();
      std::string::string(asStack_60,"all");
      nop();
      Board::TryDevilDirectDropItemName(*(string **)(gLawnApp + 0x9f0),asStack_68);
      lVar6 = LawnApp::GetActivityConfig();
      if (lVar6 != 0) {
        lVar6 = Sexy::LazySingleton<FestivalManager>::GetInstance();
        uVar2 = FUN_0471a0c4(*(undefined4 *)(lVar6 + 0xc));
        uVar8 = LawnApp::GetActivityConfig();
        ActivityConfig::GetCurrentPieceDropPercentArray
                  ((vector<float,std::allocator<float>> *)&local_20,uVar8,asStack_58,uVar2);
        cVar1 = std::vector<float,std::allocator<float>>::empty
                          ((vector<float,std::allocator<float>> *)&local_20);
        if (cVar1 != '\0') {
LAB_0471b62c:
          std::vector<float,std::allocator<float>>::~vector
                    ((vector<float,std::allocator<float>> *)&local_20);
          std::string::~string(asStack_58);
          std::string::~string(asStack_60);
          std::string::~string(asStack_68);
          goto LAB_0471b1d0;
        }
        uVar15 = 0;
        this_01 = (ActivityConfig *)LawnApp::GetActivityConfig();
        iVar3 = ActivityConfig::GetCurrentPieceDropActivityCombat(this_01,asStack_58);
        uVar10 = time((time_t *)0x0);
        Sexy::SRand(uVar10);
        uVar11 = FUN_0471a0cc(local_20,local_18);
        cVar1 = FUN_0471a0c0(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0xa01));
        uVar10 = uVar11 << 1;
        if (cVar1 == '\0') {
          uVar10 = uVar11;
        }
        for (; uVar15 < uVar11; uVar15 = uVar15 + 1) {
          iVar4 = (**(code **)(*(long *)this + 0x2f8))(this);
          lVar6 = *(long *)(gLawnApp + 0x9f0);
          iVar5 = FUN_0471a0bc(*(undefined4 *)(lVar6 + 0xc2c));
          uVar8 = local_20;
          if (uVar10 == (long)iVar5) goto LAB_0471b62c;
          pfVar12 = (float *)FUN_0471a0dc(local_20,uVar15);
          if ((float)iVar4 * (float)iVar3 * 4.656613e-10 <= *pfVar12) {
            FUN_0471a0ac(lVar6 + 0xc2c);
            psVar9 = (string *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
            p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Board::AddDirectCollectable(*(SexyVector3 **)(gLawnApp + 0x9f0),psVar9);
            if ((p_Var13 !=
                 (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)0x0) &&
               (puVar14 = (undefined8 *)
                          std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(p_Var13), 490.0 <= *(float *)((long)puVar14 + 4))) {
              local_50[2] = *(float *)(puVar14 + 1);
              local_50[0] = (float)*puVar14;
              local_50[1] = 490.0;
              iVar5 = FUN_0471a1c0(200);
              iVar4 = 2;
              if (cVar1 != '\0') {
                iVar4 = 1;
              }
              fVar16 = local_50[0] - (float)iVar5;
              local_50[0] = fVar16;
              iVar5 = FUN_0471a1c0(0x96);
              local_50[0] = (float)(iVar5 * iVar4 * (int)uVar15) + fVar16;
              (**(code **)(*(long *)p_Var13 + 0x78))(p_Var13,local_50);
              iVar4 = FUN_0471a0c8(*(undefined4 *)(p_Var13 + 0x188));
              if (iVar4 == 1) {
                DVec3::DVec3(aDStack_40);
                DVec3::DVec3(aDStack_30);
                Collectable::GetMotionNewtonianValues
                          ((Collectable *)p_Var13,(SexyVector3 *)aDStack_40,
                           (SexyVector3 *)aDStack_30,&local_69);
                local_3c = 0;
                Collectable::SetMotionNewtonian
                          ((Collectable *)p_Var13,(SexyVector3 *)aDStack_40,
                           (SexyVector3 *)aDStack_30,local_69);
              }
            }
            uVar8 = local_20;
            if ((cVar1 != '\0') &&
               (p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Board::AddDirectCollectable(*(SexyVector3 **)(gLawnApp + 0x9f0),psVar9)
               , uVar8 = local_20,
               p_Var13 !=
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)0x0)) {
              FUN_0471a0ac(*(long *)(gLawnApp + 0x9f0) + 0xc2c);
              puVar14 = (undefined8 *)
                        std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var13);
              local_50[2] = *(float *)(puVar14 + 1);
              local_50[0] = (float)*puVar14;
              local_50[1] = 490.0;
              iVar4 = FUN_0471a1c0(200);
              fVar16 = local_50[0] - (float)iVar4;
              local_50[0] = fVar16;
              iVar4 = FUN_0471a1c0(0x96);
              local_50[0] = fVar16 + (float)iVar4;
              (**(code **)(*(long *)p_Var13 + 0x78))(p_Var13,local_50);
              iVar4 = FUN_0471a0c8(*(undefined4 *)(p_Var13 + 0x188));
              uVar8 = local_20;
              if (iVar4 == 1) {
                DVec3::DVec3(aDStack_40);
                DVec3::DVec3(aDStack_30);
                Collectable::GetMotionNewtonianValues
                          ((Collectable *)p_Var13,(SexyVector3 *)aDStack_40,
                           (SexyVector3 *)aDStack_30,&local_69);
                local_3c = 0;
                Collectable::SetMotionNewtonian
                          ((Collectable *)p_Var13,(SexyVector3 *)aDStack_40,
                           (SexyVector3 *)aDStack_30,local_69);
                uVar8 = local_20;
              }
            }
          }
          uVar11 = FUN_0471a0cc(uVar8,local_18);
        }
        std::vector<float,std::allocator<float>>::~vector
                  ((vector<float,std::allocator<float>> *)&local_20);
      }
      std::string::~string(asStack_58);
      std::string::~string(asStack_60);
      std::string::~string(asStack_68);
    }
    Zombie::SetHasDroppedLoot((Zombie *)this,true);
  }
LAB_0471b1d0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

