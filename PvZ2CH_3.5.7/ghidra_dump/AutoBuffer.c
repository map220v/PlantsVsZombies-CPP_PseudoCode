// Class: AutoBuffer


/* AutoBuffer::AutoBuffer(unsigned long) */

void __thiscall AutoBuffer::AutoBuffer(AutoBuffer *this,ulong param_1)

{
  void *__s;
  
  if (param_1 == 0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  __s = malloc(param_1 + 1);
  *(ulong *)(this + 8) = param_1;
  *(void **)this = __s;
  memset(__s,0,param_1 + 1);
  return;
}


/* AutoBuffer::~AutoBuffer() */

void __thiscall AutoBuffer::~AutoBuffer(AutoBuffer *this)

{
  if ((*(void **)this != (void *)0x0) && (*(long *)(this + 8) != 0)) {
    free(*(void **)this);
    return;
  }
  return;
}

