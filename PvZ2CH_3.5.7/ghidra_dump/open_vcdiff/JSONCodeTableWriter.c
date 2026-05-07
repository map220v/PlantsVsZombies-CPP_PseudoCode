// Class: open_vcdiff::JSONCodeTableWriter


/* open_vcdiff::JSONCodeTableWriter::target_length() const */

undefined8 __thiscall open_vcdiff::JSONCodeTableWriter::target_length(JSONCodeTableWriter *this)

{
  return *(undefined8 *)(this + 0x10);
}


/* open_vcdiff::JSONCodeTableWriter::FinishEncoding(open_vcdiff::OutputStringInterface*) */

void __thiscall
open_vcdiff::JSONCodeTableWriter::FinishEncoding
          (JSONCodeTableWriter *this,OutputStringInterface *param_1)

{
  if (this[0x18] != (JSONCodeTableWriter)0x0) {
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&DAT_05593350,1);
  }
  return;
}


/* open_vcdiff::JSONCodeTableWriter::Init(unsigned long) */

undefined8 open_vcdiff::JSONCodeTableWriter::Init(ulong param_1)

{
  size_t in_x2;
  
  std::string::append((string *)(param_1 + 8),"[",in_x2);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return 1;
}


/* open_vcdiff::JSONCodeTableWriter::Output(open_vcdiff::OutputStringInterface*) */

void __thiscall
open_vcdiff::JSONCodeTableWriter::Output(JSONCodeTableWriter *this,OutputStringInterface *param_1)

{
  string *this_00;
  undefined8 uVar1;
  size_t __n;
  
  this_00 = (string *)(this + 8);
  this[0x18] = (JSONCodeTableWriter)0x1;
  uVar1 = FUN_054742a4(this_00);
  __n = FUN_05474178(this_00);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,uVar1);
  std::string::append(this_00,"",__n);
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::JSONCodeTableWriter::Copy(int, unsigned long) */

void __thiscall
open_vcdiff::JSONCodeTableWriter::Copy(JSONCodeTableWriter *this,int param_1,ulong param_2)

{
  undefined8 uVar1;
  string asStack_170 [8];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05462144(auStack_168,0x10);
  uVar1 = FUN_0546065c(auStack_168,param_1);
  uVar1 = FUN_054603b8(uVar1,&DAT_05593348);
  uVar1 = thunk_FUN_0546069c(uVar1,param_2);
  FUN_054603b8(uVar1,&DAT_05593348);
  FUN_054622ac(asStack_170,auStack_168);
  FUN_054757c0(this + 8,asStack_170);
  std::string::~string(asStack_170);
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_2;
  FUN_054614ac(auStack_168);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::JSONCodeTableWriter::Run(unsigned long, unsigned char) */

void __thiscall
open_vcdiff::JSONCodeTableWriter::Run(JSONCodeTableWriter *this,ulong param_1,uchar param_2)

{
  JSONCodeTableWriter *pJVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pJVar1 = this + 8;
  local_8 = ___stack_chk_guard;
  FUN_05475c50(pJVar1,0x22);
  FUN_05474b9c(asStack_10,param_1,param_2,auStack_18);
  uVar3 = FUN_054742a4(asStack_10);
  FUN_05475980(pJVar1,uVar3,param_1);
  std::string::~string(asStack_10);
  nop();
  FUN_05475980(pJVar1,&DAT_05632d68,2);
  lVar2 = ___stack_chk_guard;
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_1;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* open_vcdiff::JSONCodeTableWriter::~JSONCodeTableWriter() */

void __thiscall open_vcdiff::JSONCodeTableWriter::~JSONCodeTableWriter(JSONCodeTableWriter *this)

{
  *(undefined ***)this = &PTR__JSONCodeTableWriter_06a37b00;
  std::string::~string((string *)(this + 8));
  return;
}


/* open_vcdiff::JSONCodeTableWriter::~JSONCodeTableWriter() */

void __thiscall open_vcdiff::JSONCodeTableWriter::~JSONCodeTableWriter(JSONCodeTableWriter *this)

{
  ~JSONCodeTableWriter(this);
  AK::FreeHook(this);
  return;
}


/* open_vcdiff::JSONCodeTableWriter::JSONCodeTableWriter() */

void __thiscall open_vcdiff::JSONCodeTableWriter::JSONCodeTableWriter(JSONCodeTableWriter *this)

{
  CodeTableWriterInterface::CodeTableWriterInterface((CodeTableWriterInterface *)this);
  *(undefined ***)this = &PTR__JSONCodeTableWriter_06a37b00;
  Set8BytesTo0(this + 8);
  this[0x18] = (JSONCodeTableWriter)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::JSONCodeTableWriter::JSONEscape(char const*, unsigned long, std::string*) */

void __thiscall
open_vcdiff::JSONCodeTableWriter::JSONEscape
          (JSONCodeTableWriter *this,char *param_1,ulong param_2,string *param_3)

{
  byte *pbVar1;
  byte bVar2;
  size_t sVar3;
  char local_10 [8];
  long local_8;
  
  pbVar1 = (byte *)(param_1 + param_2);
  local_8 = ___stack_chk_guard;
  if (param_2 != 0) {
    do {
      while (bVar2 = *param_1, bVar2 == 0xc) {
        FUN_05475980(param_3,&DAT_056a1d80,2);
LAB_053f5128:
        param_1 = param_1 + 1;
        if ((byte *)param_1 == pbVar1) goto LAB_053f517c;
      }
      if (bVar2 < 0xd) {
        if (bVar2 == 9) {
          FUN_05475980(param_3,&DAT_056a1d68,2);
        }
        else if (bVar2 == 10) {
          FUN_05475980(param_3,&DAT_056a1d70,2);
        }
        else {
          if (bVar2 != 8) goto LAB_053f50e0;
          FUN_05475980(param_3,&DAT_056a1d60,2);
        }
        goto LAB_053f5128;
      }
      if (bVar2 == 0x22) {
        FUN_05475980(param_3,&DAT_056a1e18,2);
        goto LAB_053f5128;
      }
      if (bVar2 == 0x5c) {
        FUN_05475980(param_3,&DAT_056a1e28,2);
        goto LAB_053f5128;
      }
      if (bVar2 != 0xd) {
LAB_053f50e0:
        if ((byte)(bVar2 - 0x20) < 0x5f) {
          FUN_05475c50(param_3,bVar2);
        }
        else {
          local_10[0] = '\0';
          local_10[1] = '\0';
          local_10[2] = '\0';
          local_10[3] = '\0';
          local_10[4] = '\0';
          local_10[5] = '\0';
          local_10[6] = '\0';
          local_10[7] = '\0';
          snprintf(local_10,8,"\\u%04x");
          sVar3 = strlen(local_10);
          FUN_05475980(param_3,local_10,sVar3);
        }
        goto LAB_053f5128;
      }
      param_1 = param_1 + 1;
      FUN_05475980(param_3,&DAT_056a1340,2);
    } while ((byte *)param_1 != pbVar1);
  }
LAB_053f517c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* open_vcdiff::JSONCodeTableWriter::Add(char const*, unsigned long) */

void __thiscall
open_vcdiff::JSONCodeTableWriter::Add(JSONCodeTableWriter *this,char *param_1,ulong param_2)

{
  string *psVar1;
  
  psVar1 = (string *)(this + 8);
  FUN_05475c50(psVar1,0x22);
  JSONEscape(this,param_1,param_2,psVar1);
  FUN_05475980(psVar1,&DAT_05632d68,2);
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_2;
  return;
}

