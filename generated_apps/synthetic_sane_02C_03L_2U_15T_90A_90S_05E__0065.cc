#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);


DeclareEvent(EVENT0, 1);
DeclareEvent(EVENT1, 2);
DeclareEvent(EVENT2, 3);
DeclareEvent(EVENT3, 4);
DeclareEvent(EVENT4, 5);


DeclareTask(CPU0Task0Subtask7);
DeclareTask(CPU0Task0Subtask10);
DeclareTask(CPU0Task1Subtask11);
DeclareTask(CPU0Task1Subtask14);
DeclareTask(CPU0Task4Subtask0);
DeclareTask(CPU0Task4Subtask1);
DeclareTask(CPU0Task4Subtask2);
DeclareTask(CPU0Task4Subtask9);
DeclareTask(CPU0Task4Subtask12);
DeclareTask(CPU0Task5Subtask4);
DeclareTask(CPU0Task5Subtask13);
DeclareTask(CPU1Task2Subtask3);
DeclareTask(CPU1Task2Subtask6);
DeclareTask(CPU1Task2Subtask8);
DeclareTask(CPU1Task3Subtask5);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask5 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 74); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 100); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 117); // 0
  ActivateTask(CPU0Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 90); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 172); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 122); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 50); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 33); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 9); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 134); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 146); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 63); // 0
  SetEvent(CPU0Task4Subtask0,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 168); // 0
  SetEvent(CPU1Task2Subtask3,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 185); // 0
  ActivateTask(CPU0Task4Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 71); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 176); // 0
  ActivateTask(CPU0Task4Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 1); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 19); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 116); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 25); // 0
  SetEvent(CPU0Task5Subtask13,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 40); // 0
  ActivateTask(CPU0Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 94); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 10); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 66); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 21); // 0
  SetEvent(CPU0Task1Subtask14,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 49); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 49); // 0
  SetEvent(CPU1Task2Subtask6,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 77); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.8 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 12); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask13.9 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 103); // 0
  ActivateTask(CPU0Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 15); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 54); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 3); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 46); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 22); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 131); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 55); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 71); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 78); // 0
  ActivateTask(CPU0Task4Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 4); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 79); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 121); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 66); // 0
  ActivateTask(CPU1Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 149); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 9); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 162); // 0
  TerminateTask();

}
