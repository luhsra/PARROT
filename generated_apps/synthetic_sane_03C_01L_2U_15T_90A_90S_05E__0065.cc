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


DeclareTask(CPU0Task1Subtask2);
DeclareTask(CPU0Task1Subtask10);
DeclareTask(CPU0Task2Subtask3);
DeclareTask(CPU0Task2Subtask4);
DeclareTask(CPU0Task2Subtask5);
DeclareTask(CPU0Task2Subtask7);
DeclareTask(CPU0Task2Subtask14);
DeclareTask(CPU0Task5Subtask0);
DeclareTask(CPU0Task5Subtask11);
DeclareTask(CPU1Task0Subtask1);
DeclareTask(CPU1Task0Subtask9);
DeclareTask(CPU1Task3Subtask6);
DeclareTask(CPU2Task4Subtask8);
DeclareTask(CPU2Task4Subtask12);
DeclareTask(CPU2Task4Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 150); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 95); // 0
  ActivateTask(CPU0Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 35); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 194); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 96); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 131); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 112); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 160); // 0
  SetEvent(CPU2Task4Subtask8,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 69); // 0
  ActivateTask(CPU2Task4Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 74); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 110); // 0
  ActivateTask(CPU0Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 33); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 90); // 0
  ActivateTask(CPU0Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 156); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 137); // 0
  ActivateTask(CPU2Task4Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 122); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 192); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 11); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 52); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 22); // 0
  ActivateTask(CPU0Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 151); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 168); // 0
  ActivateTask(CPU1Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 185); // 0
  SetEvent(CPU0Task2Subtask3,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 71); // 0
  SetEvent(CPU2Task4Subtask12,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 176); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 28); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 27); // 0
  SetEvent(CPU0Task2Subtask14,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask1.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 1); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 116); // 0
  ActivateTask(CPU0Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 25); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 40); // 0
  SetEvent(CPU0Task2Subtask5,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 10); // 0
  ActivateTask(CPU0Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 48); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 99); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 120); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 107); // 0
  ActivateTask(CPU2Task4Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 49); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 20); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 39); // 0
  TerminateTask();

}