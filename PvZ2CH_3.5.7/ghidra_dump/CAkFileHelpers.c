// Class: CAkFileHelpers


/* CAkFileHelpers::CloseFile(__sFILE*) */

undefined4 CAkFileHelpers::CloseFile(__sFILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fclose((FILE *)param_1);
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  return uVar2;
}


/* CAkFileHelpers::ReadBlocking(__sFILE*&, void*, unsigned int, unsigned int, unsigned int&) */

undefined4
CAkFileHelpers::ReadBlocking
          (__sFILE **param_1,void *param_2,uint param_3,uint param_4,uint *param_5)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  
  iVar1 = fseek((FILE *)*param_1,(ulong)param_3,0);
  if (iVar1 != 0) {
    return 2;
  }
  sVar2 = fread(param_2,1,(ulong)param_4,(FILE *)*param_1);
  *param_5 = (uint)sVar2;
  uVar3 = 2;
  if (param_4 == (uint)sVar2) {
    uVar3 = 1;
  }
  return uVar3;
}

