// Class: MagicBeansProjectile


/* MagicBeansProjectile::~MagicBeansProjectile() */

void __thiscall MagicBeansProjectile::~MagicBeansProjectile(MagicBeansProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067c2a10;
  *(undefined ***)(this + 0x10) = &PTR__MagicBeansProjectile_067c2c00;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to MagicBeansProjectile::~MagicBeansProjectile() */

void __thiscall MagicBeansProjectile::~MagicBeansProjectile(MagicBeansProjectile *this)

{
  ~MagicBeansProjectile(this + -0x10);
  return;
}


/* MagicBeansProjectile::~MagicBeansProjectile() */

void __thiscall MagicBeansProjectile::~MagicBeansProjectile(MagicBeansProjectile *this)

{
  ~MagicBeansProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MagicBeansProjectile::~MagicBeansProjectile() */

void __thiscall MagicBeansProjectile::~MagicBeansProjectile(MagicBeansProjectile *this)

{
  ~MagicBeansProjectile(this + -0x10);
  return;
}


/* MagicBeansProjectile::MagicBeansProjectile() */

void __thiscall MagicBeansProjectile::MagicBeansProjectile(MagicBeansProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067c2a10;
  *(undefined ***)(this + 0x10) = &PTR__MagicBeansProjectile_067c2c00;
  return;
}


/* MagicBeansProjectile::StaticNew() */

MagicBeansProjectile * MagicBeansProjectile::StaticNew(void)

{
  MagicBeansProjectile *this;
  
  this = ::operator_new(0x1a8);
  MagicBeansProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicBeansProjectile::StaticClassInit() */

void MagicBeansProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagicBeansProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0405a9ec,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagicBeansProjectile::StaticGetClass() */

long * MagicBeansProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"MagicBeansProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicBeansProjectile::GetClass() const */

long * MagicBeansProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"MagicBeansProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicBeansProjectile::OnCollideGround() */

void __thiscall MagicBeansProjectile::OnCollideGround(MagicBeansProjectile *this)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  Projectile *this_00;
  SexyVector3 *pSVar8;
  MagicbeansshotProjectile *this_01;
  Collectable *this_02;
  string *extraout_x0;
  int iVar9;
  string *psVar10;
  float fVar11;
  Board *pBVar12;
  undefined4 uVar13;
  double dVar14;
  string asStack_90 [8];
  string asStack_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [16];
  string *local_60;
  undefined4 local_58;
  wstring awStack_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  puVar6 = (undefined8 *)Projectile::GetPreviousPosition((Projectile *)this);
  psVar10 = (string *)*puVar6;
  iVar9 = *(int *)(lVar5 + 0x14);
  local_78 = *(undefined4 *)(puVar6 + 1);
  local_80 = psVar10;
  if (3 < iVar9) {
    iVar9 = 3;
    Set8BytesTo0(asStack_90);
    do {
      iVar4 = ThemeBalloonProjectile::myrandom();
      if (iVar4 < 6) {
        std::string::append(asStack_90,"threepeater",(size_t)psVar10);
      }
      else if (iVar4 < 0xb) {
        std::string::append(asStack_90,"gatlingpea",(size_t)psVar10);
      }
      else if (iVar4 < 0x15) {
        std::string::append(asStack_90,"primalpeashooter",(size_t)psVar10);
      }
      else if (iVar4 < 0x24) {
        std::string::append(asStack_90,"peapod",(size_t)psVar10);
      }
      else if (iVar4 < 0x33) {
        std::string::append(asStack_90,"repeater",(size_t)psVar10);
      }
      else {
        std::string::append(asStack_90,"",(size_t)psVar10);
      }
      bVar2 = std::operator!=(asStack_90,"");
      if (bVar2) {
        if (450.0 < local_80._4_4_) {
          local_80 = (string *)CONCAT44(local_80._4_4_ * 0.75,(float)local_80);
        }
        iVar4 = ThemeBalloonProjectile::myrandom();
        local_80._0_4_ = (float)(iVar4 + -0x32) + (float)local_80;
        iVar4 = ThemeBalloonProjectile::myrandom();
        psVar10 = *(string **)(gLawnApp + 0x9f0);
        local_80 = (string *)CONCAT44((float)(iVar4 + -0x32) + local_80._4_4_,(float)local_80);
        std::string::string((string *)&local_40,"vasebreaker_packet");
        this_02 = (Collectable *)
                  Board::AddCollectableWithDefaultMotion(psVar10,(SexyVector3 *)&local_40);
        std::string::~string((string *)&local_40);
        nop();
        nop();
        CollectableSeedPacket::SetSeedType(extraout_x0);
        cVar3 = RiftUtils::IsPlayingRiftLevel();
        if ((cVar3 != '\0') && (cVar3 = RiftUtils::IsRiftTimedLevel(), cVar3 != '\0')) {
          FUN_0405a1a0(extraout_x0 + 0x208);
        }
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_70,0.0,0.0,0.0);
        local_60 = local_80;
        local_58 = local_78;
        DVec3::DVec3((DVec3 *)awStack_50);
        DVec3::DVec3((DVec3 *)&local_40);
        CalculateTossVelocity
                  ((SexyVector3 *)&local_80,(SexyVector3 *)&local_60,40.0,0.6,
                   (SexyVector3 *)awStack_50,(SexyVector3 *)&local_40);
        if (0.0 < local_38) {
          local_38 = -local_38;
        }
        Collectable::SetMotionNewtonian
                  (this_02,(SexyVector3 *)awStack_50,(SexyVector3 *)&local_40,true);
        Collectable::SetKeepOnBoard(this_02,true);
        NewPVPHealthBar::FlashDamage((NewPVPHealthBar *)this_02);
        puVar1 = gMessageRouter;
        FUN_05475d88(asStack_88,asStack_90);
        psVar10 = asStack_88;
        MessageRouter::Post<std::string_const&,std::string>
                  ((MessageRouter *)puVar1,Message::VaseArtifactProducePlantCard);
        std::string::~string(asStack_88);
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    std::string::~string(asStack_90);
    iVar9 = *(int *)(lVar5 + 0x14);
  }
  if (2 < iVar9) {
    iVar9 = 8;
    dVar14 = 0.0;
    do {
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      fVar11 = (float)dVar14;
      dVar14 = dVar14 + 0.7853981852531433;
      Sexy::SexyTransform2D::RotateRad(aSStack_30,fVar11);
      uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
      std::string::string((string *)&local_60,"MagicbeansshotDefaultProjectile");
      Sexy::ToWString((string *)&local_60);
      Sexy::RtName::RtName((RtName *)&local_40,awStack_50);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_70,uVar7,0xc,(RtName *)&local_40);
      Sexy::RtName::~RtName((RtName *)&local_40);
      FUN_05476c50(awStack_50);
      std::string::~string((string *)&local_60);
      nop();
      pBVar12 = (Board *)((ulong)local_80 & 0xffffffff);
      uVar13 = (undefined4)((ulong)local_80 >> 0x20);
      uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_70);
      fVar11 = 0.0;
      this_00 = (Projectile *)Board::AddProjectile(pBVar12,uVar7,(RtName *)&local_40,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      FUN_0405a1ac(this_00 + 0x24);
      pSVar8 = (SexyVector3 *)Projectile::GetVelocity(this_00);
      local_40 = Sexy::SexyMatrix3::operator*((SexyMatrix3 *)aSStack_30,pSVar8);
      local_3c = uVar13;
      local_38 = fVar11;
      Projectile::SetVelocity(this_00,(SexyVector3 *)&local_40);
      this_01 = Sexy::RtObject::Cast<MagicbeansshotProjectile>((RtObject *)this_00);
      MagicbeansshotProjectile::SetProjectileAnimation(this_01);
      lVar5 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
      fVar11 = (float)FUN_04059fc0(*(undefined4 *)(this_00 + 0xd8));
      FUN_04059fc4(fVar11 + (float)((*(int *)(lVar5 + 0x10) + -0x14) * 0x32),this_00 + 0xd8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  Projectile::OnCollideGround((Projectile *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

