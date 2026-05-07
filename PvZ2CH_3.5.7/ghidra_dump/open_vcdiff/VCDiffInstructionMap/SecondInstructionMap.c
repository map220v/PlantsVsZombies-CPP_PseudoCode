// Class: open_vcdiff::VCDiffInstructionMap::SecondInstructionMap


/* open_vcdiff::VCDiffInstructionMap::SecondInstructionMap::SecondInstructionMap(int, int) */

void __thiscall
open_vcdiff::VCDiffInstructionMap::SecondInstructionMap::SecondInstructionMap
          (SecondInstructionMap *this,int param_1,int param_2)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  memset(this + 8,0,0x800);
  return;
}


/* open_vcdiff::VCDiffInstructionMap::SecondInstructionMap::~SecondInstructionMap() */

void __thiscall
open_vcdiff::VCDiffInstructionMap::SecondInstructionMap::~SecondInstructionMap
          (SecondInstructionMap *this)

{
  ColourFit *pCVar1;
  ColourFit *this_00;
  int iVar2;
  long lVar3;
  int iVar4;
  SecondInstructionMap *pSVar5;
  
  pSVar5 = this + 8;
  do {
    this_00 = *(ColourFit **)pSVar5;
    if (this_00 != (ColourFit *)0x0) {
      iVar2 = *(int *)this;
      if (0 < iVar2) {
        lVar3 = 0;
        iVar4 = 0;
        do {
          pCVar1 = this_00 + lVar3;
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 8;
          if (*(ColourFit **)pCVar1 != (ColourFit *)0x0) {
            EATextSquish::ColourFit::~ColourFit(*(ColourFit **)pCVar1);
            iVar2 = *(int *)this;
            this_00 = *(ColourFit **)pSVar5;
          }
        } while (iVar4 < iVar2);
        if (this_00 == (ColourFit *)0x0) goto LAB_053f4ab8;
      }
      EATextSquish::ColourFit::~ColourFit(this_00);
    }
LAB_053f4ab8:
    pSVar5 = pSVar5 + 8;
    if (pSVar5 == this + 0x808) {
      return;
    }
  } while( true );
}


/* open_vcdiff::VCDiffInstructionMap::SecondInstructionMap::Add(unsigned char, unsigned char,
   unsigned char, unsigned char, unsigned char) */

void __thiscall
open_vcdiff::VCDiffInstructionMap::SecondInstructionMap::Add
          (SecondInstructionMap *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4,
          uchar param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  void *__s;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + (ulong)param_1 * 8 + 8);
  if (lVar5 == 0) {
    uVar3 = (long)*(int *)this << 3;
    if (0xfe0000000000000 < (ulong)(long)*(int *)this) {
      uVar3 = 0xffffffffffffffff;
    }
    __s = operator_new__(uVar3);
    iVar1 = *(int *)this;
    *(void **)(this + (ulong)param_1 * 8 + 8) = __s;
    memset(__s,0,(long)iVar1 << 3);
    lVar5 = *(long *)(this + (ulong)param_1 * 8 + 8);
  }
  lVar2 = (ulong)((uint)param_2 + (uint)param_4) * 8;
  lVar4 = *(long *)(lVar5 + lVar2);
  if (lVar4 == 0) {
    lVar4 = FUN_053f48a8(*(int *)(this + 4) + 1);
    *(long *)(lVar5 + lVar2) = lVar4;
  }
  if (*(short *)(lVar4 + (ulong)param_3 * 2) == 0x100) {
    *(ushort *)(lVar4 + (ulong)param_3 * 2) = (ushort)param_5;
  }
  return;
}


/* open_vcdiff::VCDiffInstructionMap::SecondInstructionMap::Lookup(unsigned char, unsigned char,
   unsigned char, unsigned char) const */

undefined2 __thiscall
open_vcdiff::VCDiffInstructionMap::SecondInstructionMap::Lookup
          (SecondInstructionMap *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  uint uVar1;
  long lVar2;
  
  if (((int)(uint)param_3 <= *(int *)(this + 4)) &&
     (*(long *)(this + (long)(int)(uint)param_1 * 8 + 8) != 0)) {
    uVar1 = param_4 + 3;
    if (param_2 != 3) {
      uVar1 = (uint)param_2;
    }
    lVar2 = *(long *)(*(long *)(this + (long)(int)(uint)param_1 * 8 + 8) + (long)(int)uVar1 * 8);
    if (lVar2 != 0) {
      return *(undefined2 *)(lVar2 + (ulong)param_3 * 2);
    }
  }
  return 0x100;
}

