#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);


DeclareEvent(EVENT0, 1);
DeclareEvent(EVENT1, 2);
DeclareEvent(EVENT2, 3);
DeclareEvent(EVENT3, 4);
DeclareEvent(EVENT4, 5);


DeclareTask(CPU0Task4Subtask0);
DeclareTask(CPU1Task1Subtask2);
DeclareTask(CPU1Task1Subtask5);
DeclareTask(CPU1Task1Subtask6);
DeclareTask(CPU1Task1Subtask9);
DeclareTask(CPU1Task1Subtask13);
DeclareTask(CPU1Task2Subtask3);
DeclareTask(CPU1Task2Subtask4);
DeclareTask(CPU1Task2Subtask7);
DeclareTask(CPU1Task2Subtask14);
DeclareTask(CPU1Task3Subtask1);
DeclareTask(CPU1Task3Subtask8);
DeclareTask(CPU1Task3Subtask11);
DeclareTask(CPU2Task0Subtask10);
DeclareTask(CPU2Task5Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask12 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 124); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 54); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 30); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 58); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 44); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 53); // 0
  ActivateTask(CPU1Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 133); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 38); // 0
  ActivateTask(CPU1Task1Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 41); // 0
  ActivateTask(CPU1Task3Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 193); // 0
  SetEvent(CPU1Task3Subtask11,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 130); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 60); // 0
  SetEvent(CPU1Task2Subtask4,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 132); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 124); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 144); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 59); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 32); // 0
  SetEvent(CPU1Task2Subtask3,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 18); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 172); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 27); // 0
  ActivateTask(CPU1Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 95); // 0
  ActivateTask(CPU1Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 176); // 0
  ActivateTask(CPU1Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 177); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 151); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 60); // 0
  ActivateTask(CPU1Task3Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 181); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 144); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 26); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 110); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 69); // 0
  SetEvent(CPU1Task3Subtask8,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 38); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 140); // 0
  ActivateTask(CPU1Task1Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 48); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 21); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 87); // 0
  ActivateTask(CPU1Task1Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 177); // 0
  SetEvent(CPU1Task1Subtask13,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask12.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 155); // 0
  TerminateTask();

}