#include <QString>
#include <QtTest>

class UltimateUserInterfaceTests : public QObject
{
    Q_OBJECT

public:
    UltimateUserInterfaceTests();

private Q_SLOTS:
    void testCase1();
};

UltimateUserInterfaceTests::UltimateUserInterfaceTests()
{
}

void UltimateUserInterfaceTests::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(UltimateUserInterfaceTests)

#include "tst_ultimateuserinterfacetests.moc"
