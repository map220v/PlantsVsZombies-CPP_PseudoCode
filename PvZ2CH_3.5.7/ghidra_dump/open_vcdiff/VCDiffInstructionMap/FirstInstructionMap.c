// Class: open_vcdiff::VCDiffInstructionMap::FirstInstructionMap


/* open_vcdiff::VCDiffInstructionMap::FirstInstructionMap::FirstInstructionMap(int, int) */

void __thiscall
open_vcdiff::VCDiffInstructionMap::FirstInstructionMap::FirstInstructionMap
          (FirstInstructionMap *this,int param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  uVar2 = (long)param_1 << 3;
  *(int *)this = param_1;
  if (0xfe0000000000000 < (ulong)(long)param_1) {
    uVar2 = 0xffffffffffffffff;
  }
  *(int *)(this + 4) = param_2;
  pvVar3 = operator_new__(uVar2);
  *(void **)(this + 8) = pvVar3;
  if (0 < *(int *)this) {
    lVar5 = 0;
    iVar6 = 0;
    while( true ) {
      iVar6 = iVar6 + 1;
      uVar4 = FUN_053f48a8(*(int *)(this + 4) + 1);
      iVar1 = *(int *)this;
      *(undefined8 *)((long)pvVar3 + lVar5) = uVar4;
      lVar5 = lVar5 + 8;
      if (iVar1 <= iVar6) break;
      pvVar3 = *(void **)(this + 8);
    }
  }
  return;
}


/* open_vcdiff::VCDiffInstructionMap::FirstInstructionMap::~FirstInstructionMap() */

void __thiscall
open_vcdiff::VCDiffInstructionMap::FirstInstructionMap::~FirstInstructionMap
          (FirstInstructionMap *this)

{
  ColourFit *pCVar1;
  ColourFit *this_00;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = *(int *)this;
  if (iVar2 < 1) {
    this_00 = *(ColourFit **)(this + 8);
  }
  else {
    lVar3 = 0;
    this_00 = *(ColourFit **)(this + 8);
    iVar4 = 0;
    do {
      pCVar1 = this_00 + lVar3;
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 8;
      if (*(ColourFit **)pCVar1 != (ColourFit *)0x0) {
        EATextSquish::ColourFit::~ColourFit(*(ColourFit **)pCVar1);
        iVar2 = *(int *)this;
        this_00 = *(ColourFit **)(this + 8);
      }
    } while (iVar4 < iVar2);
  }
  if (this_00 != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(this_00);
    return;
  }
  return;
}

