// Class: PlantAnimRig_ExplodeONut


/* PlantAnimRig_ExplodeONut::onPopAnimInitialized() */

void __thiscall PlantAnimRig_ExplodeONut::onPopAnimInitialized(PlantAnimRig_ExplodeONut *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  (**(code **)(*(long *)this + 0x260))(this,0xffffffff);
  return;
}


/* PlantAnimRig_ExplodeONut::SetArmorStateIndex(int) */

void __thiscall
PlantAnimRig_ExplodeONut::SetArmorStateIndex(PlantAnimRig_ExplodeONut *this,int param_1)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  string *psVar4;
  
  iVar1 = (**(code **)(*(long *)this + 600))();
  if (0 < iVar1) {
    iVar2 = 0;
    psVar3 = (string *)&DAT_06ab97f0;
    psVar4 = (string *)&DAT_06ab97c0;
    do {
      while (param_1 == iVar2) {
        if (this[0x220] != (PlantAnimRig_ExplodeONut)0x0) {
          PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,false);
          PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,true);
          goto LAB_03902b70;
        }
        iVar2 = iVar2 + 1;
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,true);
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,false);
        psVar3 = psVar3 + 8;
        psVar4 = psVar4 + 8;
        if (iVar2 == iVar1) {
          return;
        }
      }
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,false);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,false);
LAB_03902b70:
      iVar2 = iVar2 + 1;
      psVar3 = psVar3 + 8;
      psVar4 = psVar4 + 8;
    } while (iVar2 != iVar1);
  }
  return;
}


/* PlantAnimRig_ExplodeONut::~PlantAnimRig_ExplodeONut() */

void __thiscall PlantAnimRig_ExplodeONut::~PlantAnimRig_ExplodeONut(PlantAnimRig_ExplodeONut *this)

{
  *(undefined ***)this = &PTR_GetClass_066c06f0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ExplodeONut_066c0968;
  PlantAnimRig_Shielded::~PlantAnimRig_Shielded((PlantAnimRig_Shielded *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ExplodeONut::~PlantAnimRig_ExplodeONut() */

void __thiscall PlantAnimRig_ExplodeONut::~PlantAnimRig_ExplodeONut(PlantAnimRig_ExplodeONut *this)

{
  ~PlantAnimRig_ExplodeONut(this + -0x10);
  return;
}


/* PlantAnimRig_ExplodeONut::~PlantAnimRig_ExplodeONut() */

void __thiscall PlantAnimRig_ExplodeONut::~PlantAnimRig_ExplodeONut(PlantAnimRig_ExplodeONut *this)

{
  ~PlantAnimRig_ExplodeONut(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ExplodeONut::~PlantAnimRig_ExplodeONut() */

void __thiscall PlantAnimRig_ExplodeONut::~PlantAnimRig_ExplodeONut(PlantAnimRig_ExplodeONut *this)

{
  ~PlantAnimRig_ExplodeONut(this + -0x10);
  return;
}


/* PlantAnimRig_ExplodeONut::StaticGetClass() */

long * PlantAnimRig_ExplodeONut::StaticGetClass(void)

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
  uVar2 = PlantAnimRig_Shielded::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_ExplodeONut",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_ExplodeONut::GetClass() const */

long * PlantAnimRig_ExplodeONut::GetClass(void)

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
  uVar2 = PlantAnimRig_Shielded::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_ExplodeONut",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_ExplodeONut::PlantAnimRig_ExplodeONut() */

void __thiscall PlantAnimRig_ExplodeONut::PlantAnimRig_ExplodeONut(PlantAnimRig_ExplodeONut *this)

{
  PlantAnimRig_Shielded::PlantAnimRig_Shielded((PlantAnimRig_Shielded *)this);
  *(undefined ***)this = &PTR_GetClass_066c06f0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ExplodeONut_066c0968;
  return;
}


/* PlantAnimRig_ExplodeONut::StaticNew() */

PlantAnimRig_ExplodeONut * PlantAnimRig_ExplodeONut::StaticNew(void)

{
  PlantAnimRig_ExplodeONut *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_ExplodeONut(this);
  return this;
}

