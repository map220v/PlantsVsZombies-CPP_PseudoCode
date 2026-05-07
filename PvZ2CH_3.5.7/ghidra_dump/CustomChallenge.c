// Class: CustomChallenge


/* CustomChallenge::~CustomChallenge() */

void __thiscall CustomChallenge::~CustomChallenge(CustomChallenge *this)

{
  CustomChallengeData::~CustomChallengeData((CustomChallengeData *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomChallenge::CustomChallenge() */

void __thiscall CustomChallenge::CustomChallenge(CustomChallenge *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  std::string::string((string *)(this + 8),"");
  nop();
  CustomChallengeData::CustomChallengeData((CustomChallengeData *)(this + 0x10));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomChallenge::CustomChallenge(CustomChallenge const&) */

void __thiscall CustomChallenge::CustomChallenge(CustomChallenge *this,CustomChallenge *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  CustomChallengeData::CustomChallengeData
            ((CustomChallengeData *)(this + 0x10),(CustomChallengeData *)(param_1 + 0x10));
  return;
}


/* CustomChallenge::TEMPNAMEPLACEHOLDERVALUE(CustomChallenge const&) */

CustomChallenge * __thiscall
CustomChallenge::operator=(CustomChallenge *this,CustomChallenge *param_1)

{
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  CustomChallengeData::operator=
            ((CustomChallengeData *)(this + 0x10),(CustomChallengeData *)(param_1 + 0x10));
  return this;
}


/* CustomChallenge::HasLastStand() const */

bool __thiscall CustomChallenge::HasLastStand(CustomChallenge *this)

{
  return *(int *)(this + 0x10) != -1;
}


/* CustomChallenge::HasSingleHanded() const */

byte __thiscall CustomChallenge::HasSingleHanded(CustomChallenge *this)

{
  byte bVar1;
  
  bVar1 = FUN_0547419c(this + 0x110);
  return bVar1 ^ 1;
}


/* CustomChallenge::HasVaseBreaker() const */

bool __thiscall CustomChallenge::HasVaseBreaker(CustomChallenge *this)

{
  return *(int *)(this + 0x118) != -1;
}


/* CustomChallenge::HasStatueMaze() const */

byte __thiscall CustomChallenge::HasStatueMaze(CustomChallenge *this)

{
  byte bVar1;
  
  bVar1 = std::vector<StatueMazeSet,std::allocator<StatueMazeSet>>::empty
                    ((vector<StatueMazeSet,std::allocator<StatueMazeSet>> *)(this + 0x30));
  return bVar1 ^ 1;
}


/* CustomChallenge::HasEvilDave() const */

byte __thiscall CustomChallenge::HasEvilDave(CustomChallenge *this)

{
  byte bVar1;
  
  bVar1 = std::vector<EvilDavePlantEntry,std::allocator<EvilDavePlantEntry>>::empty
                    ((vector<EvilDavePlantEntry,std::allocator<EvilDavePlantEntry>> *)(this + 0x50))
  ;
  return bVar1 ^ 1;
}


/* CustomChallenge::HasTowerDefend() const */

byte __thiscall CustomChallenge::HasTowerDefend(CustomChallenge *this)

{
  byte bVar1;
  
  bVar1 = std::vector<TowerDefendRoadInfo,std::allocator<TowerDefendRoadInfo>>::empty
                    ((vector<TowerDefendRoadInfo,std::allocator<TowerDefendRoadInfo>> *)(this + 200)
                    );
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomChallenge::HasMolds() const */

void __thiscall CustomChallenge::HasMolds(CustomChallenge *this)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  do {
    uVar7 = *(undefined8 *)(this + 0x18);
    uVar5 = FUN_035ba4d8(uVar7,*(undefined8 *)(this + 0x20));
    if (uVar5 <= uVar6) {
      bVar1 = false;
      break;
    }
    puVar2 = (undefined8 *)FUN_035bb238(uVar7,uVar6);
    uVar7 = FUN_035c1110(*puVar2);
    lVar3 = FUN_035bb238(*(undefined8 *)(this + 0x18),uVar6);
    uVar4 = FUN_035c1160(*(undefined8 *)(lVar3 + 8));
    local_18 = FUN_035c5408(uVar7,uVar4);
    lVar3 = FUN_035bb238(*(undefined8 *)(this + 0x18),uVar6);
    local_10 = FUN_035c1160(*(undefined8 *)(lVar3 + 8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    uVar6 = uVar6 + 1;
  } while (!bVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* CustomChallenge::HasAnyChallenge() const */

undefined8 __thiscall CustomChallenge::HasAnyChallenge(CustomChallenge *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = HasLastStand(this);
  if ((((cVar1 == '\0') && (cVar1 = HasMolds(this), cVar1 == '\0')) &&
      (cVar1 = HasStatueMaze(this), cVar1 == '\0')) &&
     (((cVar1 = HasEvilDave(this), cVar1 == '\0' && (cVar1 = HasTowerDefend(this), cVar1 == '\0'))
      && (cVar1 = HasSingleHanded(this), cVar1 == '\0')))) {
    uVar2 = HasVaseBreaker(this);
    return uVar2;
  }
  return 1;
}


/* CustomChallenge::CustomChallenge(CustomChallenge&&) */

void __thiscall CustomChallenge::CustomChallenge(CustomChallenge *this,CustomChallenge *param_1)

{
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  CustomChallengeData::CustomChallengeData
            ((CustomChallengeData *)(this + 0x10),(CustomChallengeData *)(param_1 + 0x10));
  return;
}


/* CustomChallenge::TEMPNAMEPLACEHOLDERVALUE(CustomChallenge&&) */

CustomChallenge * __thiscall
CustomChallenge::operator=(CustomChallenge *this,CustomChallenge *param_1)

{
  FUN_05474278();
  FUN_05474278(this + 8,param_1 + 8);
  CustomChallengeData::operator=
            ((CustomChallengeData *)(this + 0x10),(CustomChallengeData *)(param_1 + 0x10));
  return this;
}

