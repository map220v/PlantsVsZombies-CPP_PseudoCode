// Class: Effect_Barrage


/* Effect_Barrage::SetViceBarrage(Effect_Barrage*) */

void __thiscall Effect_Barrage::SetViceBarrage(Effect_Barrage *this,Effect_Barrage *param_1)

{
  *(Effect_Barrage **)(this + 0x70) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Barrage::StaticClassInit() */

void Effect_Barrage::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BarrageWaveInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_047875fc,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Effect_Barrage");
    (*pcVar3)(plVar2,asStack_10,FUN_04789228,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_Barrage::StaticGetClass() */

long * Effect_Barrage::StaticGetClass(void)

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
  uVar2 = RealObject::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_Barrage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_Barrage::GetClass() const */

long * Effect_Barrage::GetClass(void)

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
  uVar2 = RealObject::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_Barrage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_Barrage::IsInitlized() */

Effect_Barrage __thiscall Effect_Barrage::IsInitlized(Effect_Barrage *this)

{
  return this[0x2e];
}


/* Effect_Barrage::InitBarrage(BoardEntity*, float, float, bool) */

void __thiscall
Effect_Barrage::InitBarrage
          (Effect_Barrage *this,BoardEntity *param_1,float param_2,float param_3,bool param_4)

{
  if (param_1 != (BoardEntity *)0x0) {
    *(BoardEntity **)(this + 0x48) = param_1;
    this[0x2d] = (Effect_Barrage)param_4;
    *(float *)(this + 0x30) = param_2;
    this[0x2e] = (Effect_Barrage)(param_1 != (BoardEntity *)0x0);
    *(float *)(this + 0x34) = param_3;
    return;
  }
  this[0x2d] = (Effect_Barrage)param_4;
  this[0x2e] = (Effect_Barrage)(*(long *)(this + 0x48) != 0);
  *(float *)(this + 0x30) = param_2;
  *(float *)(this + 0x34) = param_3;
  return;
}


/* Effect_Barrage::GetViceBarrage() */

undefined8 __thiscall Effect_Barrage::GetViceBarrage(Effect_Barrage *this)

{
  return *(undefined8 *)(this + 0x70);
}


/* Effect_Barrage::StopBarrage() */

void __thiscall Effect_Barrage::StopBarrage(Effect_Barrage *this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x50));
  *(undefined8 *)(this + 0x68) = uVar1;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x3c) = uVar2;
  return;
}


/* Effect_Barrage::Init() */

void __thiscall Effect_Barrage::Init(Effect_Barrage *this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x50));
  *(undefined8 *)(this + 0x68) = uVar1;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x3c) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Barrage::StartNewBarrageWave() */

void Effect_Barrage::StartNewBarrageWave(void)

{
  vector<BarrageWaveInfo,std::allocator<BarrageWaveInfo>> *this;
  __normal_iterator *this_00;
  int iVar1;
  LawnApp *pLVar2;
  char cVar3;
  bool bVar4;
  ReceivedDataCallback *in_x0;
  long lVar5;
  undefined8 uVar6;
  ZombieSkycityBattlePlane *this_01;
  ZombieHydraHeadAnimRig *pZVar7;
  float *pfVar8;
  long lVar9;
  Projectile *this_02;
  DVec3 *this_03;
  ZombieSkyCityTwinsPlane *this_04;
  ZombieSkyCityElectric *this_05;
  LevelModuleManager *this_06;
  PooyanModule *this_07;
  SexyVector3 *pSVar10;
  RtObject *this_08;
  code *pcVar11;
  int iVar12;
  int iVar13;
  float in_s1;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60 [4];
  undefined8 local_50;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this = (vector<BarrageWaveInfo,std::allocator<BarrageWaveInfo>> *)(in_x0 + 0x50);
  local_8 = ___stack_chk_guard;
  cVar3 = std::vector<BarrageWaveInfo,std::allocator<BarrageWaveInfo>>::empty(this);
  if (((cVar3 == '\0') && (in_x0[0x2e] != (ReceivedDataCallback)0x0)) &&
     (*(long *)(in_x0 + 0x48) != 0)) {
    if (*(long *)(in_x0 + 0x70) != 0) {
      StartNewBarrageWave();
    }
    this_00 = (__normal_iterator *)(in_x0 + 0x68);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    bVar4 = __gnu_cxx::operator!=(this_00,(__normal_iterator *)&local_50);
    if (bVar4) {
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this_00);
      pLVar2 = gLawnApp;
      iVar13 = *(int *)(lVar5 + 4);
      iVar1 = *(int *)(lVar5 + 8);
      if ((*(char *)(lVar5 + 2) != '\0') && (cVar3 = LawnApp::IsInModule(gLawnApp,1), cVar3 != '\0')
         ) {
        this_06 = (LevelModuleManager *)
                  FUN_04787538(*(undefined8 *)(*(long *)(pLVar2 + 0x9f0) + 0xad8));
        this_07 = LevelModuleManager::GetModuleByClass<PooyanModule>(this_06);
        fVar14 = (float)PooyanModule::GetShooterPosition(this_07);
        local_60[0] = fVar14;
        DVec3::DVec3((DVec3 *)&local_50);
        if (*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(in_x0 + 0x48) ==
            (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0) {
          fVar15 = (float)local_50;
          fVar16 = local_50._4_4_;
        }
        else {
          pSVar10 = (SexyVector3 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(in_x0 + 0x48));
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,pSVar10);
          fVar15 = *(float *)(in_x0 + 0x30) + (float)local_50;
          fVar16 = *(float *)(in_x0 + 0x34) + local_50._4_4_;
          local_50 = CONCAT44(fVar16,fVar15);
        }
        lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this_00);
        iVar13 = *(int *)(lVar5 + 0xc);
        fVar16 = atanf((fVar16 - in_s1) / (fVar14 - fVar15));
        fVar16 = fVar16 * 57.295776;
        if ((fVar14 < fVar15) || ((in_s1 <= fVar15 && (fVar14 == fVar15)))) {
          fVar16 = fVar16 + 180.0;
        }
        iVar13 = (int)(fVar16 - (float)(iVar1 * iVar13) * 0.5);
      }
      uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this_00);
      Sexy::ToWString((string *)(lVar5 + 0x18));
      Sexy::RtName::RtName((RtName *)&local_50,(wstring *)local_60);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_68,uVar6,0xc,(RtName *)&local_50);
      Sexy::RtName::~RtName((RtName *)&local_50);
      FUN_05476c50((string *)local_60);
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this_00);
      for (iVar12 = 0; iVar12 < *(int *)(lVar5 + 0xc); iVar12 = iVar12 + 1) {
        this_08 = *(RtObject **)(in_x0 + 0x48);
        if (*(char *)(lVar5 + 1) != '\0') {
          if (this_08 != (RtObject *)0x0) {
            bVar4 = Sexy::RtObject::IsA<ZombieSkycityBattlePlane>(this_08);
            if (bVar4) {
              this_01 = Sexy::RtObject::Cast<ZombieSkycityBattlePlane>(*(RtObject **)(in_x0 + 0x48))
              ;
              pZVar7 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
              pcVar11 = *(code **)(*(long *)pZVar7 + 0x168);
              std::string::string((string *)local_60,"attack");
              Sexy::
              MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                        (in_x0,onShootDone);
              Sexy::Delegate1<std::string_const&>::
              Delegate1<Effect_Barrage,void(Effect_Barrage::*)(std::string_const&)>
                        (aDStack_38,(RtName *)&local_50);
LAB_04788484:
              (*pcVar11)(pZVar7,(string *)local_60,0,aDStack_38);
LAB_0478848c:
              std::string::~string((string *)local_60);
              nop();
              lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this_00);
              this_08 = *(RtObject **)(in_x0 + 0x48);
              goto LAB_047884ac;
            }
            this_08 = (RtObject *)0x0;
            if (*(RtObject **)(in_x0 + 0x48) != (RtObject *)0x0) {
              bVar4 = Sexy::RtObject::IsA<ZombieSkyCityElectric>(*(RtObject **)(in_x0 + 0x48));
              if (bVar4) {
                this_05 = Sexy::RtObject::Cast<ZombieSkyCityElectric>(*(RtObject **)(in_x0 + 0x48));
                pZVar7 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_05);
                pcVar11 = *(code **)(*(long *)pZVar7 + 0x168);
                std::string::string((string *)local_60,"attack");
                Sexy::
                MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                          (in_x0,onShootDone);
                Sexy::Delegate1<std::string_const&>::
                Delegate1<Effect_Barrage,void(Effect_Barrage::*)(std::string_const&)>
                          (aDStack_38,(RtName *)&local_50);
                (*pcVar11)(pZVar7,(string *)local_60,0,aDStack_38);
                goto LAB_0478848c;
              }
              this_08 = (RtObject *)0x0;
              if (*(RtObject **)(in_x0 + 0x48) != (RtObject *)0x0) {
                bVar4 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>(*(RtObject **)(in_x0 + 0x48));
                if (bVar4) {
                  this_04 = Sexy::RtObject::Cast<ZombieSkyCityTwinsPlane>
                                      (*(RtObject **)(in_x0 + 0x48));
                  pZVar7 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_04);
                  pcVar11 = *(code **)(*(long *)pZVar7 + 0x168);
                  std::string::string((string *)local_60,"attack02");
                  Sexy::
                  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                            (in_x0,onShootDone);
                  Sexy::Delegate1<std::string_const&>::
                  Delegate1<Effect_Barrage,void(Effect_Barrage::*)(std::string_const&)>
                            (aDStack_38,(RtName *)&local_50);
                  goto LAB_04788484;
                }
                this_08 = *(RtObject **)(in_x0 + 0x48);
              }
            }
          }
          lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this_00);
        }
LAB_047884ac:
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_08);
        fVar15 = *(float *)(in_x0 + 0x30);
        fVar14 = *pfVar8;
        fVar16 = pfVar8[1];
        fVar17 = *(float *)(in_x0 + 0x34);
        lVar9 = FUN_05474184(lVar5 + 0x18);
        if (lVar9 != 0) {
          uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)aRStack_68);
          this_02 = (Projectile *)
                    Board::AddProjectile
                              ((Board *)(fVar15 + fVar14),fVar17 + fVar16,0,uVar6,
                               (RtName *)&local_50,*(undefined8 *)(in_x0 + 0x48),0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
          Projectile::SetShadow(this_02,false);
          DangerRoomManager::SetMaxLevel((DangerRoomManager *)this_02,0xf0);
          Sexy::SexyMath::DegToRad((float)iVar13);
          FUN_04787530(this_02 + 0xc4);
          fVar14 = (float)FUN_0478752c(*(undefined4 *)(this_02 + 0xc4));
          fVar15 = cosf(fVar14);
          this_03 = (DVec3 *)Projectile::GetVelocity(this_02);
          fVar16 = (float)DVec3::getLength(this_03);
          fVar14 = sinf(fVar14);
          Projectile::SetVelocity(this_02,fVar16 * fVar15,-(fVar14 * fVar16),0.0);
          lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this_00);
        }
        iVar13 = iVar13 + iVar1;
      }
      *(undefined4 *)(in_x0 + 0x40) = *(undefined4 *)(lVar5 + 0x10);
      FUN_04788078(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    }
    else {
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)this);
      *(undefined8 *)(in_x0 + 0x68) = uVar6;
      if (in_x0[0x2d] == (ReceivedDataCallback)0x0) {
        StartNewBarrageWave();
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
/* Effect_Barrage::Update() */

void __thiscall Effect_Barrage::Update(Effect_Barrage *this)

{
  bool bVar1;
  ZombieSkyCityBasic *pZVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  char *pcVar4;
  ZombieInvisiblePlane *this_01;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  undefined4 uVar8;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar7 = (float)PVZ_T();
  if (fVar7 - *(float *)(this + 0x3c) <= *(float *)(this + 0x40)) goto LAB_04788960;
  if ((*(RtObject **)(this + 0x48) != (RtObject *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<ZombieSkyCityBasic>(*(RtObject **)(this + 0x48)), bVar1)) {
    pZVar2 = Sexy::RtObject::Cast<ZombieSkyCityBasic>(*(RtObject **)(this + 0x48));
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)pZVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar1 = std::operator==("skycity_armor1",(string *)(lVar3 + 8));
    if (bVar1) {
      Zombie::setZombieState((Zombie *)pZVar2,1,0);
      goto LAB_04788960;
    }
  }
  uVar8 = PVZ_T();
  *(undefined4 *)(this + 0x3c) = uVar8;
  if (*(RtObject **)(this + 0x48) != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<ZombieSkyCityBasic>(*(RtObject **)(this + 0x48));
    if (bVar1) {
      pZVar2 = Sexy::RtObject::Cast<ZombieSkyCityBasic>(*(RtObject **)(this + 0x48));
      plVar5 = (long *)Zombie::GetAnimRig((Zombie *)pZVar2);
      pcVar6 = *(code **)(*plVar5 + 0x168);
      std::string::string(asStack_58,"shoot1");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onShootDone);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<Effect_Barrage,void(Effect_Barrage::*)(std::string_const&)>(aDStack_38,aCStack_50);
      (*pcVar6)(plVar5,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
      goto LAB_04788960;
    }
    if (((*(RtObject **)(this + 0x48) != (RtObject *)0x0) &&
        (bVar1 = Sexy::RtObject::IsA<ZombieInvisiblePlane>(*(RtObject **)(this + 0x48)), bVar1)) &&
       (pcVar4 = (char *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0x68))
       , *pcVar4 == '\0')) {
      this_01 = Sexy::RtObject::Cast<ZombieInvisiblePlane>(*(RtObject **)(this + 0x48));
      plVar5 = (long *)Zombie::GetAnimRig((Zombie *)this_01);
      pcVar6 = *(code **)(*plVar5 + 0x168);
      std::string::string(asStack_58,"attack03");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onShootDone);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<Effect_Barrage,void(Effect_Barrage::*)(std::string_const&)>(aDStack_38,aCStack_50);
      (*pcVar6)(plVar5,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
      goto LAB_04788960;
    }
  }
  StartNewBarrageWave();
LAB_04788960:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Barrage::onShootDone(std::string const&) */

void __thiscall Effect_Barrage::onShootDone(Effect_Barrage *this,string *param_1)

{
  bool bVar1;
  RtObject *this_00;
  ZombieSkycityBattlePlane *this_01;
  PopAnimRig *pPVar2;
  ZombieSkyCityBasic *this_02;
  ZombieSkyCityTwinsPlane *this_03;
  ZombieInvisiblePlane *this_04;
  char *pcVar3;
  long *plVar4;
  ZombieSkyCityElectric *this_05;
  ZombieHydraHeadAnimRig *pZVar5;
  long lVar6;
  code *pcVar7;
  DummyInit *local_68;
  string asStack_58 [8];
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(RtObject **)(this + 0x48) == (RtObject *)0x0) goto LAB_04788b14;
  bVar1 = Sexy::RtObject::IsA<ZombieSkyCityBasic>(*(RtObject **)(this + 0x48));
  if (bVar1) {
    this_02 = Sexy::RtObject::Cast<ZombieSkyCityBasic>(*(RtObject **)(this + 0x48));
    bVar1 = std::operator==("shoot1",param_1);
    if (bVar1) {
      StartNewBarrageWave();
      plVar4 = (long *)Zombie::GetAnimRig((Zombie *)this_02);
      pcVar7 = *(code **)(*plVar4 + 0x168);
      std::string::string(asStack_58,"shoot2");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onShootDone);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<Effect_Barrage,void(Effect_Barrage::*)(std::string_const&)>
                ((Delegate1<std::string_const&> *)aDStack_38,asStack_50);
      (*pcVar7)(plVar4,asStack_58,0,(Delegate1<std::string_const&> *)aDStack_38);
      std::string::~string(asStack_58);
      nop();
      goto LAB_04788b14;
    }
    bVar1 = std::operator==("shoot2",param_1);
    if (bVar1) {
      plVar4 = (long *)Zombie::GetAnimRig((Zombie *)this_02);
      pcVar3 = "shoot3";
      lVar6 = *plVar4;
LAB_04788dd0:
      pcVar7 = *(code **)(lVar6 + 0x168);
      std::string::string(asStack_58,pcVar3);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onShootDone);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<Effect_Barrage,void(Effect_Barrage::*)(std::string_const&)>
                ((Delegate1<std::string_const&> *)aDStack_38,asStack_50);
      (*pcVar7)(plVar4,asStack_58,0,(Delegate1<std::string_const&> *)aDStack_38);
      std::string::~string(asStack_58);
      nop();
      goto LAB_04788b14;
    }
    bVar1 = std::operator==("shoot3",param_1);
    if (!bVar1) goto LAB_04788b14;
    pPVar2 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this_02);
    std::string::string(asStack_50,"walk");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  }
  else {
    if (*(RtObject **)(this + 0x48) == (RtObject *)0x0) goto LAB_04788b14;
    bVar1 = Sexy::RtObject::IsA<ZombieInvisiblePlane>(*(RtObject **)(this + 0x48));
    this_00 = *(RtObject **)(this + 0x48);
    if (bVar1) {
      this_04 = Sexy::RtObject::Cast<ZombieInvisiblePlane>(this_00);
      bVar1 = std::operator==("attack03",param_1);
      if (bVar1) {
        StartNewBarrageWave();
        plVar4 = (long *)Zombie::GetAnimRig((Zombie *)this_04);
        pcVar3 = "attack04";
        lVar6 = *plVar4;
        goto LAB_04788dd0;
      }
      bVar1 = std::operator==("attack04",param_1);
      if (bVar1) {
        pcVar3 = (char *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0x68))
        ;
        if (*pcVar3 == '\0') {
          plVar4 = (long *)Zombie::GetAnimRig((Zombie *)this_04);
          pcVar7 = *(code **)(*plVar4 + 0x168);
          std::string::string(asStack_58,"attack05");
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onShootDone);
          Sexy::Delegate1<std::string_const&>::
          Delegate1<Effect_Barrage,void(Effect_Barrage::*)(std::string_const&)>
                    ((Delegate1<std::string_const&> *)aDStack_38,asStack_50);
        }
        else {
          plVar4 = (long *)Zombie::GetAnimRig((Zombie *)this_04);
          pcVar7 = *(code **)(*plVar4 + 0x168);
          std::string::string(asStack_58,"attack04");
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onShootDone);
          Sexy::Delegate1<std::string_const&>::
          Delegate1<Effect_Barrage,void(Effect_Barrage::*)(std::string_const&)>
                    ((Delegate1<std::string_const&> *)aDStack_38,asStack_50);
        }
        local_68 = aDStack_38;
        (*pcVar7)(plVar4,asStack_58,0,local_68);
        std::string::~string(asStack_58);
        nop();
        goto LAB_04788b14;
      }
      bVar1 = std::operator==("attack05",param_1);
      if (!bVar1) goto LAB_04788b14;
      pPVar2 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this_04);
      std::string::string(asStack_50,"walk");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    }
    else {
      if (this_00 == (RtObject *)0x0) goto LAB_04788b14;
      bVar1 = Sexy::RtObject::IsA<ZombieSkycityBattlePlane>(this_00);
      if (bVar1) {
        this_01 = Sexy::RtObject::Cast<ZombieSkycityBattlePlane>(*(RtObject **)(this + 0x48));
        pPVar2 = (PopAnimRig *)Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
        std::string::string(asStack_50,"walk");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      }
      else {
        if (*(RtObject **)(this + 0x48) == (RtObject *)0x0) goto LAB_04788b14;
        bVar1 = Sexy::RtObject::IsA<ZombieSkyCityElectric>(*(RtObject **)(this + 0x48));
        if (bVar1) {
          this_05 = Sexy::RtObject::Cast<ZombieSkyCityElectric>(*(RtObject **)(this + 0x48));
          pZVar5 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_05);
          std::string::string(asStack_50,"walk");
          Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
          PopAnimRig::PlayAndContinue((PopAnimRig *)pZVar5,asStack_50,0,aDStack_38);
          std::string::~string(asStack_50);
          nop();
          goto LAB_04788b14;
        }
        if ((*(RtObject **)(this + 0x48) == (RtObject *)0x0) ||
           (bVar1 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>(*(RtObject **)(this + 0x48)),
           !bVar1)) goto LAB_04788b14;
        this_03 = Sexy::RtObject::Cast<ZombieSkyCityTwinsPlane>(*(RtObject **)(this + 0x48));
        pPVar2 = (PopAnimRig *)Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_03);
        std::string::string(asStack_50,"walk");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      }
    }
  }
  local_68 = aDStack_38;
  PopAnimRig::PlayAndContinue(pPVar2,asStack_50,0,local_68);
  std::string::~string(asStack_50);
  nop();
LAB_04788b14:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Barrage::StartBasicBarrage() */

void __thiscall Effect_Barrage::StartBasicBarrage(Effect_Barrage *this)

{
  bool bVar1;
  ZombieSkyCityBasic *this_00;
  ZombieInvisiblePlane *this_01;
  long *plVar2;
  code *pcVar3;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Init(this);
  if (*(Effect_Barrage **)(this + 0x70) != (Effect_Barrage *)0x0) {
    Init(*(Effect_Barrage **)(this + 0x70));
  }
  if (*(RtObject **)(this + 0x48) != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<ZombieSkyCityBasic>(*(RtObject **)(this + 0x48));
    if (bVar1) {
      this_00 = Sexy::RtObject::Cast<ZombieSkyCityBasic>(*(RtObject **)(this + 0x48));
      plVar2 = (long *)Zombie::GetAnimRig((Zombie *)this_00);
      pcVar3 = *(code **)(*plVar2 + 0x168);
      std::string::string(asStack_58,"shoot1");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onShootDone);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<Effect_Barrage,void(Effect_Barrage::*)(std::string_const&)>(aDStack_38,aCStack_50);
      (*pcVar3)(plVar2,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
      goto LAB_04789034;
    }
    if (((*(RtObject **)(this + 0x48) != (RtObject *)0x0) &&
        (bVar1 = Sexy::RtObject::IsA<ZombieInvisiblePlane>(*(RtObject **)(this + 0x48)), bVar1)) &&
       (this[0x2d] == (Effect_Barrage)0x0)) {
      this_01 = Sexy::RtObject::Cast<ZombieInvisiblePlane>(*(RtObject **)(this + 0x48));
      plVar2 = (long *)Zombie::GetAnimRig((Zombie *)this_01);
      pcVar3 = *(code **)(*plVar2 + 0x168);
      std::string::string(asStack_58,"attack03");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onShootDone);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<Effect_Barrage,void(Effect_Barrage::*)(std::string_const&)>(aDStack_38,aCStack_50);
      (*pcVar3)(plVar2,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
      goto LAB_04789034;
    }
  }
  StartNewBarrageWave();
LAB_04789034:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_Barrage::Effect_Barrage() */

void __thiscall Effect_Barrage::Effect_Barrage(Effect_Barrage *this)

{
  _func_void *extraout_x1;
  undefined4 uVar1;
  
  RealObject::RealObject((RealObject *)this);
  *(undefined ***)this = &PTR_GetClass_068d8b30;
  *(undefined ***)(this + 0x10) = &PTR__Effect_Barrage_068d8c50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)(this + 0x68),extraout_x1);
  this[0x2d] = (Effect_Barrage)0x0;
  this[0x2e] = (Effect_Barrage)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  uVar1 = PVZ_EOT();
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x40) = uVar1;
  std::vector<BarrageWaveInfo,std::allocator<BarrageWaveInfo>>::clear
            ((vector<BarrageWaveInfo,std::allocator<BarrageWaveInfo>> *)(this + 0x50));
  return;
}


/* Effect_Barrage::StaticNew() */

Effect_Barrage * Effect_Barrage::StaticNew(void)

{
  Effect_Barrage *this;
  
  this = ::operator_new(0x78);
  Effect_Barrage(this);
  return this;
}


/* Effect_Barrage::~Effect_Barrage() */

void __thiscall Effect_Barrage::~Effect_Barrage(Effect_Barrage *this)

{
  vector<BarrageWaveInfo,std::allocator<BarrageWaveInfo>> *this_00;
  char cVar1;
  
  this_00 = (vector<BarrageWaveInfo,std::allocator<BarrageWaveInfo>> *)(this + 0x50);
  *(undefined ***)this = &PTR_GetClass_068d8b30;
  *(undefined ***)(this + 0x10) = &PTR__Effect_Barrage_068d8c50;
  cVar1 = std::vector<BarrageWaveInfo,std::allocator<BarrageWaveInfo>>::empty(this_00);
  if (cVar1 == '\0') {
    std::vector<BarrageWaveInfo,std::allocator<BarrageWaveInfo>>::clear(this_00);
  }
  std::vector<BarrageWaveInfo,std::allocator<BarrageWaveInfo>>::~vector(this_00);
  RealObject::~RealObject((RealObject *)this);
  return;
}


/* non-virtual thunk to Effect_Barrage::~Effect_Barrage() */

void __thiscall Effect_Barrage::~Effect_Barrage(Effect_Barrage *this)

{
  ~Effect_Barrage(this + -0x10);
  return;
}


/* Effect_Barrage::~Effect_Barrage() */

void __thiscall Effect_Barrage::~Effect_Barrage(Effect_Barrage *this)

{
  ~Effect_Barrage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Effect_Barrage::~Effect_Barrage() */

void __thiscall Effect_Barrage::~Effect_Barrage(Effect_Barrage *this)

{
  ~Effect_Barrage(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Barrage::AddBarrageWaveInfo(bool, bool, bool, int, int, int, float, std::string) */

void __thiscall
Effect_Barrage::AddBarrageWaveInfo
          (undefined4 param_7,Effect_Barrage *this,undefined1 param_1,BarrageWaveInfo param_2,
          undefined1 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,
          undefined8 param_9)

{
  BarrageWaveInfo local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BarrageWaveInfo::BarrageWaveInfo(&local_28);
  local_28 = param_2;
  local_27 = param_1;
  local_26 = param_3;
  local_24 = param_4;
  local_20 = param_5;
  local_1c = param_6;
  local_18 = param_7;
  thunk_FUN_05475e00(auStack_10,param_9);
  std::vector<BarrageWaveInfo,std::allocator<BarrageWaveInfo>>::push_back
            ((vector<BarrageWaveInfo,std::allocator<BarrageWaveInfo>> *)(this + 0x50),&local_28);
  Sexy::SharedRenderTarget::Pool::Entry::~Entry((Entry *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Barrage::AddBarrageWaveByProps(bool, bool, int, int, int, float, float, std::string) */

void __thiscall
Effect_Barrage::AddBarrageWaveByProps
          (Effect_Barrage *param_1_00,Effect_Barrage *param_2_00,Effect_Barrage *this,
          undefined1 param_1,char param_2,int param_3,int param_4,int param_5,undefined8 param_9)

{
  bool bVar1;
  ZombieInvisiblePlane *this_00;
  ZombieHydraHeadAnimRig *pZVar2;
  ZombieSkyCityBasic *this_01;
  ZombieSkycityBattlePlane *this_02;
  ZombieSkyCityElectric *this_03;
  ZombieSkyCityTwinsPlane *this_04;
  char *pcVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  string *local_78;
  PopAnimRig *local_50;
  PopAnimRig *local_48;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(RtObject **)(this + 0x48) != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<ZombieSkyCityBasic>(*(RtObject **)(this + 0x48));
    if (bVar1) {
      this_01 = Sexy::RtObject::Cast<ZombieSkyCityBasic>(*(RtObject **)(this + 0x48));
      pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
      std::string::string(asStack_20,"shoot1");
      fVar6 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pZVar2,asStack_20);
      pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
      std::string::string(asStack_18,"shoot2");
      fVar7 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pZVar2,asStack_18);
      fVar7 = fVar7 + fVar6;
      local_50 = (PopAnimRig *)Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
      pcVar3 = "shoot3";
LAB_0478a154:
      local_78 = asStack_18;
      std::string::string(asStack_10,pcVar3);
      fVar6 = (float)PopAnimRig::CalcAnimLengthSeconds(local_50,asStack_10);
      fVar7 = fVar7 + fVar6;
      std::string::~string(asStack_10);
      nop();
      std::string::~string(local_78);
      nop();
      std::string::~string(asStack_20);
      nop();
      goto LAB_0478a1ac;
    }
    if (*(RtObject **)(this + 0x48) != (RtObject *)0x0) {
      bVar1 = Sexy::RtObject::IsA<ZombieSkycityBattlePlane>(*(RtObject **)(this + 0x48));
      if (bVar1) {
        this_02 = Sexy::RtObject::Cast<ZombieSkycityBattlePlane>(*(RtObject **)(this + 0x48));
        local_48 = (PopAnimRig *)Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_02);
LAB_0478a390:
        pcVar3 = "attack";
LAB_0478a3a4:
        std::string::string(asStack_10,pcVar3);
        fVar7 = (float)PopAnimRig::CalcAnimLengthSeconds(local_48,asStack_10);
        std::string::~string(asStack_10);
        nop();
        goto LAB_0478a1ac;
      }
      if (*(RtObject **)(this + 0x48) != (RtObject *)0x0) {
        bVar1 = Sexy::RtObject::IsA<ZombieSkyCityElectric>(*(RtObject **)(this + 0x48));
        if (bVar1) {
          this_03 = Sexy::RtObject::Cast<ZombieSkyCityElectric>(*(RtObject **)(this + 0x48));
          local_48 = (PopAnimRig *)Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_03);
          goto LAB_0478a390;
        }
        if (*(RtObject **)(this + 0x48) != (RtObject *)0x0) {
          bVar1 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>(*(RtObject **)(this + 0x48));
          if (bVar1) {
            this_04 = Sexy::RtObject::Cast<ZombieSkyCityTwinsPlane>(*(RtObject **)(this + 0x48));
            local_48 = (PopAnimRig *)Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_04);
            pcVar3 = "attack02";
            goto LAB_0478a3a4;
          }
          if ((*(RtObject **)(this + 0x48) != (RtObject *)0x0) &&
             (bVar1 = Sexy::RtObject::IsA<ZombieInvisiblePlane>(*(RtObject **)(this + 0x48)), bVar1)
             ) {
            this_00 = Sexy::RtObject::Cast<ZombieInvisiblePlane>(*(RtObject **)(this + 0x48));
            pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
            std::string::string(asStack_20,"attack03");
            fVar6 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pZVar2,asStack_20);
            pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
            std::string::string(asStack_18,"attack04");
            fVar7 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pZVar2,asStack_18);
            fVar7 = fVar7 + fVar6;
            local_50 = (PopAnimRig *)Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
            pcVar3 = "attack05";
            goto LAB_0478a154;
          }
        }
      }
    }
  }
  fVar7 = 0.0;
LAB_0478a1ac:
  if (param_2 == '\0') {
    FUN_05475d88(asStack_10,param_9);
    AddBarrageWaveInfo(param_2_00._0_4_,this,1,0,param_1,param_3,
                       (int)((float)(param_4 - param_3) / (float)param_5),param_5,asStack_10);
    std::string::~string(asStack_10);
  }
  else {
    fVar6 = (float)(param_4 - param_3) / (float)(param_5 + -1);
    if (fVar6 <= 0.0) {
      if (param_4 < param_3) {
        iVar5 = 0;
        if (0.0 < fVar7) {
          do {
            bVar1 = fVar7 < (float)iVar5 * (float)param_1_00._0_4_;
            if (bVar1) {
              iVar4 = 1;
            }
            else {
              iVar4 = iVar5 + 1;
            }
            FUN_05475d88(asStack_10,param_9);
            AddBarrageWaveInfo(param_1_00._0_4_,this,bVar1 || iVar5 == 0,1,param_1,param_3,0,1,
                               asStack_10);
            std::string::~string(asStack_10);
            param_3 = (int)((float)param_3 + fVar6);
            iVar5 = iVar4;
          } while (param_4 < param_3);
        }
        else {
          do {
            bVar1 = iVar5 == 0;
            iVar5 = iVar5 + 1;
            FUN_05475d88(asStack_10,param_9);
            AddBarrageWaveInfo(param_1_00._0_4_,this,bVar1,1,param_1,param_3,0,1,asStack_10);
            std::string::~string(asStack_10);
            param_3 = (int)((float)param_3 + fVar6);
          } while (param_4 < param_3);
        }
      }
    }
    else if (param_3 < param_4) {
      iVar5 = 0;
      if (0.0 < fVar7) {
        do {
          bVar1 = fVar7 < (float)iVar5 * (float)param_1_00._0_4_;
          if (bVar1) {
            iVar4 = 1;
          }
          else {
            iVar4 = iVar5 + 1;
          }
          FUN_05475d88(asStack_10,param_9);
          AddBarrageWaveInfo(param_1_00._0_4_,this,bVar1 || iVar5 == 0,1,param_1,param_3,0,1,
                             asStack_10);
          std::string::~string(asStack_10);
          param_3 = (int)((float)param_3 + fVar6);
          iVar5 = iVar4;
        } while (param_3 < param_4);
      }
      else {
        do {
          bVar1 = iVar5 == 0;
          iVar5 = iVar5 + 1;
          FUN_05475d88(asStack_10,param_9);
          AddBarrageWaveInfo(param_1_00._0_4_,this,bVar1,1,param_1,param_3,0,1,asStack_10);
          std::string::~string(asStack_10);
          param_3 = (int)((float)param_3 + fVar6);
        } while (param_3 < param_4);
      }
    }
    FUN_05475d88(asStack_10,param_9);
    AddBarrageWaveInfo(param_2_00._0_4_,this,0,1,param_1,param_4,0,1,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

