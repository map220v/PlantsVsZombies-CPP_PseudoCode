// Class: open_vcdiff::VCDiffCodeTableReader


/* open_vcdiff::VCDiffCodeTableReader::Init(char const**, char const*) */

void __thiscall
open_vcdiff::VCDiffCodeTableReader::Init(VCDiffCodeTableReader *this,char **param_1,char *param_2)

{
  *(char ***)(this + 0x10) = param_1;
  *(char **)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined2 *)(this + 0x28) = 0x100;
  *(undefined2 *)(this + 0x2a) = 0x100;
  return;
}


/* open_vcdiff::VCDiffCodeTableReader::UpdatePointers(char const**, char const*) */

void __thiscall
open_vcdiff::VCDiffCodeTableReader::UpdatePointers
          (VCDiffCodeTableReader *this,char **param_1,char *param_2)

{
  *(char **)(this + 0x18) = param_2;
  *(char ***)(this + 0x10) = param_1;
  *(char **)(this + 0x20) = *param_1;
  *(undefined2 *)(this + 0x2a) = *(undefined2 *)(this + 0x28);
  return;
}


/* open_vcdiff::VCDiffCodeTableReader::UnGetInstruction() */

void __thiscall open_vcdiff::VCDiffCodeTableReader::UnGetInstruction(VCDiffCodeTableReader *this)

{
  short sVar1;
  short sVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(this + 0x20);
  if (uVar5 != 0) {
    puVar3 = *(ulong **)(this + 0x10);
    if (*puVar3 < uVar5) {
      uVar4 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar4 = FUN_054603b8(uVar4,
                           "Internal error: last_instruction_start past end of instructions_and_sizes in UnGetInstruction"
                          );
      FUN_0545f9e8(uVar4,FUN_0545fdc8);
      CheckFatalError();
      puVar3 = *(ulong **)(this + 0x10);
      uVar5 = *(ulong *)(this + 0x20);
    }
    sVar1 = *(short *)(this + 0x28);
    *puVar3 = uVar5;
    sVar2 = *(short *)(this + 0x2a);
    if ((sVar1 != 0x100) && (sVar2 != 0x100)) {
      uVar4 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar4 = FUN_054603b8(uVar4,
                           "Internal error: two pending instructions in a row in UnGetInstruction");
      FUN_0545f9e8(uVar4,FUN_0545fdc8);
      CheckFatalError();
      sVar2 = *(short *)(this + 0x2a);
    }
    *(short *)(this + 0x28) = sVar2;
  }
  return;
}


/* open_vcdiff::VCDiffCodeTableReader::~VCDiffCodeTableReader() */

void __thiscall
open_vcdiff::VCDiffCodeTableReader::~VCDiffCodeTableReader(VCDiffCodeTableReader *this)

{
  std::auto_ptr<open_vcdiff::VCDiffCodeTableData>::~auto_ptr
            ((auto_ptr<open_vcdiff::VCDiffCodeTableData> *)(this + 8));
  return;
}


/* open_vcdiff::VCDiffCodeTableReader::GetNextInstruction(int*, unsigned char*) */

char __thiscall
open_vcdiff::VCDiffCodeTableReader::GetNextInstruction
          (VCDiffCodeTableReader *this,int *param_1,uchar *param_2)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  uchar uVar4;
  short sVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  
  if (*(undefined8 **)(this + 0x10) == (undefined8 *)0x0) {
    uVar8 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    pcVar9 = "Internal error: GetNextInstruction() called before Init()";
LAB_053f2c04:
    uVar8 = FUN_054603b8(uVar8,pcVar9);
    FUN_0545f9e8(uVar8,FUN_0545fdc8);
    CheckFatalError();
    return '\x04';
  }
  sVar5 = *(short *)(this + 0x28);
  *(undefined8 *)(this + 0x20) = **(undefined8 **)(this + 0x10);
  *(short *)(this + 0x2a) = sVar5;
  while (sVar5 == 0x100) {
    plVar7 = *(long **)(this + 0x10);
    if (*(byte **)(this + 0x18) <= (byte *)*plVar7) {
      return '\x05';
    }
    bVar3 = *(byte *)*plVar7;
    uVar10 = (ulong)bVar3;
    if (*(char *)(*(long *)this + uVar10 + 0x100) != '\0') {
      *(ushort *)(this + 0x28) = (ushort)bVar3;
    }
    *plVar7 = *plVar7 + 1;
    lVar1 = *(long *)this + uVar10;
    cVar2 = *(char *)(*(long *)this + uVar10);
    uVar4 = *(uchar *)(lVar1 + 0x400);
    bVar3 = *(byte *)(lVar1 + 0x200);
    if (cVar2 != '\0') goto LAB_053f2b8c;
    sVar5 = *(short *)(this + 0x28);
  }
  *(undefined2 *)(this + 0x28) = 0x100;
  lVar1 = *(long *)this + (ulong)(byte)sVar5;
  cVar2 = *(char *)(lVar1 + 0x100);
  bVar3 = *(byte *)(lVar1 + 0x300);
  uVar4 = *(uchar *)(lVar1 + 0x500);
LAB_053f2b8c:
  if (bVar3 == 0) {
    iVar6 = VarintBE<int>::Parse(*(char **)(this + 0x18),*(char ***)(this + 0x10));
    *param_1 = iVar6;
    if (iVar6 == -2) {
      UnGetInstruction(this);
      return '\x05';
    }
    if (iVar6 == -1) {
      uVar8 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      pcVar9 = "Instruction size is not a valid variable-length integer";
      goto LAB_053f2c04;
    }
  }
  else {
    *param_1 = (uint)bVar3;
  }
  *param_2 = uVar4;
  return cVar2;
}


/* open_vcdiff::VCDiffCodeTableReader::VCDiffCodeTableReader() */

void __thiscall
open_vcdiff::VCDiffCodeTableReader::VCDiffCodeTableReader(VCDiffCodeTableReader *this)

{
  *(undefined1 **)this = VCDiffCodeTableData::kDefaultCodeTableData;
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)(this + 8),(rbtree_node *)0x0);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined2 *)(this + 0x28) = 0x100;
  *(undefined2 *)(this + 0x2a) = 0x100;
  return;
}


/* open_vcdiff::VCDiffCodeTableReader::UseCodeTable(open_vcdiff::VCDiffCodeTableData const&,
   unsigned char) */

char __thiscall
open_vcdiff::VCDiffCodeTableReader::UseCodeTable
          (VCDiffCodeTableReader *this,VCDiffCodeTableData *param_1,uchar param_2)

{
  exception_ptr *this_00;
  char cVar1;
  long lVar2;
  void *__dest;
  undefined8 uVar3;
  VCDiffCodeTableData *pVVar4;
  
  cVar1 = VCDiffCodeTableData::Validate(param_1,param_2);
  if (cVar1 != '\0') {
    this_00 = (exception_ptr *)(this + 8);
    lVar2 = std::__exception_ptr::exception_ptr::_M_get(this_00);
    if (lVar2 == 0) {
      pVVar4 = ::operator_new(0x600);
      std::auto_ptr<open_vcdiff::VCDiffCodeTableData>::reset
                ((auto_ptr<open_vcdiff::VCDiffCodeTableData> *)this_00,pVVar4);
    }
    __dest = (void *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    memcpy(__dest,param_1,0x600);
    uVar3 = std::__exception_ptr::exception_ptr::_M_get(this_00);
    *(undefined8 *)this = uVar3;
  }
  return cVar1;
}

