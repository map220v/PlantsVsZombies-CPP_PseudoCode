// Class: PowerupPinchZombie


/* PowerupPinchZombie::unregisterForEvents() */

void __thiscall PowerupPinchZombie::unregisterForEvents(PowerupPinchZombie *this)

{
  Board::UnregisterGesture(*(Board **)(gLawnApp + 0x9f0),this);
  return;
}


/* PowerupPinchZombie::PowerupPinchZombie() */

void __thiscall PowerupPinchZombie::PowerupPinchZombie(PowerupPinchZombie *this)

{
  BasePowerup::BasePowerup((BasePowerup *)this);
  *(undefined ***)this = &PTR_GetClass_068321b0;
  return;
}


/* PowerupPinchZombie::StaticNew() */

PowerupPinchZombie * PowerupPinchZombie::StaticNew(void)

{
  PowerupPinchZombie *this;
  
  this = ::operator_new(200);
  PowerupPinchZombie(this);
  return this;
}


/* PowerupPinchZombie::StaticGetClass() */

long * PowerupPinchZombie::StaticGetClass(void)

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
  uVar2 = BasePowerup::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupPinchZombie",uVar2,StaticNew);
  return sClass;
}


/* PowerupPinchZombie::GetClass() const */

long * PowerupPinchZombie::GetClass(void)

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
  uVar2 = BasePowerup::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupPinchZombie",uVar2,StaticNew);
  return sClass;
}


/* PowerupPinchZombie::~PowerupPinchZombie() */

void __thiscall PowerupPinchZombie::~PowerupPinchZombie(PowerupPinchZombie *this)

{
  *(undefined ***)this = &PTR_GetClass_068321b0;
  BasePowerup::~BasePowerup((BasePowerup *)this);
  return;
}


/* PowerupPinchZombie::~PowerupPinchZombie() */

void __thiscall PowerupPinchZombie::~PowerupPinchZombie(PowerupPinchZombie *this)

{
  ~PowerupPinchZombie(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupPinchZombie::registerForEvents() */

void __thiscall PowerupPinchZombie::registerForEvents(PowerupPinchZombie *this)

{
  Board *pBVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate3<Sexy::Point_const&,int,float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handlePinch);
  Sexy::Delegate3<Sexy::Point_const&,int,float>::
  Delegate3<PowerupPinchZombie,void(PowerupPinchZombie::*)(Sexy::Point,int,float)>
            (aDStack_38,aCStack_50);
  Board::RegisterGesture(pBVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupPinchZombie::handlePinch(Sexy::Point, int, float) */

void PowerupPinchZombie::handlePinch
               (float param_1,BasePowerup *param_2,int *param_3,LineBreakCategory *param_4,
               undefined8 param_5,LineBreakCategory *param_6)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  string *psVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  Effect_PopAnim *this;
  ResourceInfo *pRVar11;
  char *pcVar12;
  LineBreakCategory *pLVar13;
  long lVar14;
  undefined8 uVar15;
  Zombie *this_00;
  Zombie *pZVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68;
  float local_64;
  float local_60;
  undefined8 local_58;
  LineBreakCategory *local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = (int)param_4;
  pLVar13 = ___stack_chk_guard;
  cVar1 = BasePowerup::isInState(param_2,1);
  if ((cVar1 != '\0') || (cVar1 = BasePowerup::isInState(param_2,2), cVar1 != '\0')) {
    auVar21 = FUN_0430adf4(0x62);
    iVar5 = auVar21._0_4_;
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (auVar21._0_8_,auVar21._8_8_,param_4,pLVar13,param_6);
    if (cVar1 == '\0') {
      iVar5 = FUN_0430adf4(0xfa);
    }
    if ((param_1 < 0.0) && (iVar4 <= iVar5 * iVar5)) {
      uVar17 = 0;
      this_00 = (Zombie *)0x0;
      lVar14 = *(long *)(gLawnApp + 0x9f0);
      iVar4 = FUN_0430ae08(*param_3 - *(int *)(lVar14 + 0x48));
      iVar5 = FUN_0430ae08(param_3[1] - *(int *)(lVar14 + 0x4c));
      fVar19 = (float)iVar5;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,(float)iVar4,fVar19);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      psVar7 = (string *)
               EntityFinder::GetEntitiesTouchingCircle2D
                         (0x41a00000,
                          (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80
                          ,2,(FastCurve *)&local_a0,0xffffffff,0xffffffff);
      fVar18 = (float)CheatManager::GetVariableValue(psVar7);
      uVar15 = local_80;
      lVar14 = FUN_0430ad84(local_80,local_78);
      pZVar16 = this_00;
      if (lVar14 != 0) {
        do {
          puVar8 = (undefined8 *)FUN_0430ad90(uVar15,uVar17);
          this_00 = (Zombie *)*puVar8;
          plVar9 = (long *)Zombie::GetAnimRig(this_00);
          local_98 = (**(code **)(*plVar9 + 0x198))();
          fVar20 = *(float *)(this_00 + 0x1c);
          local_94 = fVar19;
          local_90 = FUN_0430ad98(*(undefined4 *)(this_00 + 0x18),fVar20,
                                  *(undefined4 *)(this_00 + 0x20));
          local_8c = fVar20;
          local_88 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_90,(SexyVector2 *)&local_98)
          ;
          local_84 = fVar20;
          local_68 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_88,(SexyVector2 *)&local_a0)
          ;
          local_64 = fVar20;
          fVar19 = (float)VectorNorm((FPoint *)&local_68);
          cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
          if ((((cVar2 != '\0') ||
               (bVar3 = (**(code **)(*(long *)this_00 + 0x330))(this_00), (fVar19 < fVar18) <= bVar3
               )) || (cVar2 = Zombie::IsValidPinchTarget(this_00), cVar2 == '\0')) ||
             (iVar4 = FUN_0430ad78(*(undefined4 *)(this_00 + 0xb0)), iVar4 - 4U < 2)) {
            this_00 = pZVar16;
            fVar19 = fVar18;
          }
          fVar18 = fVar19;
          uVar15 = local_80;
          uVar17 = uVar17 + 1;
          uVar10 = FUN_0430ad84(local_80,local_78);
          pZVar16 = this_00;
          fVar19 = fVar20;
        } while (uVar17 < uVar10);
      }
      if (this_00 != (Zombie *)0x0) {
        cVar2 = Zombie::HasHead(this_00);
        while ((cVar2 != '\0' &&
               (fVar19 = (float)FUN_0430ad74(*(undefined4 *)(param_2 + 0x1c)), 0.0 < fVar19))) {
          Sexy::Point::Point((Point *)&local_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x0,local_88,local_84,(DamageInfo *)&local_68,1,0,
                     (Point *)&local_90,0);
          uVar6 = FUN_0430ad78(*(undefined4 *)(this_00 + 0xb0));
          switch(uVar6) {
          case 0:
          case 6:
          case 7:
          case 8:
            local_60 = (float)Zombie::GetHitpointsUntilBleedout(this_00);
            local_60 = local_60 + 1.0;
            break;
          case 1:
            local_60 = (float)FUN_0430ad7c(*(undefined4 *)(this_00 + 0x2a8));
            local_58 = 0x40;
            break;
          case 2:
          case 10:
            local_60 = (float)FUN_0430ad80(*(undefined4 *)(this_00 + 0x2ac));
            local_60 = local_60 * 0.5;
            local_58 = 0x40;
          }
          (**(code **)(*(long *)this_00 + 0x110))(this_00,(DamageInfo *)&local_68);
          MessageRouter::Post<Zombie*,Zombie*>
                    ((MessageRouter *)gMessageRouter,Message::ZombiePinched,this_00);
          cVar2 = BasePowerup::isInState(param_2,1);
          if (cVar2 != '\0') {
            BasePowerup::Activate(param_2);
          }
          BasePowerup::DecrementTimeByUseCost(param_2);
          DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          cVar2 = Zombie::HasHead(this_00);
        }
        Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        nop();
        std::string::string((string *)&local_88,"POPANIM_EFFECTS_POWER_UP_HEAD_PINCH");
        GetPAMByName((string *)&local_88);
        pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
        Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar11,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        std::string::~string((string *)&local_88);
        nop();
        Effect_PopAnim::SetCentered(this,true);
        std::string::string((string *)&local_68,"animation");
        Effect_PopAnim::PlaySingleAnimation(this,(DamageInfo *)&local_68,2);
        std::string::~string((string *)&local_68);
        nop();
        EATextSquish::Vec3::Vec3((Vec3 *)&local_68,local_a0,local_9c,0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)this,(SexyVector3 *)&local_68,800000);
        fVar19 = (float)RandRangeFloat(0.0,6.2831855);
        Effect_PopAnim::SetOrientation(this,fVar19);
        if (cVar1 == '\0') {
          (**(code **)(*(long *)this + 0x80))(0x3fc00000,this);
        }
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_UI_PowerUP_Pincher");
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

