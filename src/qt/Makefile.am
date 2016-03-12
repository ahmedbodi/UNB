include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = voxels-qt
noinst_LIBRARIES = libvoxelsqt.a
SUBDIRS = . $(BUILD_TEST_QT)
DIST_SUBDIRS = . test

# voxels qt core #
QT_TS = \
  locale/voxels_ach.ts \
  locale/voxels_af_ZA.ts \
  locale/voxels_ar.ts \
  locale/voxels_be_BY.ts \
  locale/voxels_bg.ts \
  locale/voxels_bs.ts \
  locale/voxels_ca_ES.ts \
  locale/voxels_ca.ts \
  locale/voxels_ca@valencia.ts \
  locale/voxels_cmn.ts \
  locale/voxels_cs.ts \
  locale/voxels_cy.ts \
  locale/voxels_da.ts \
  locale/voxels_de.ts \
  locale/voxels_el_GR.ts \
  locale/voxels_en.ts \
  locale/voxels_eo.ts \
  locale/voxels_es_CL.ts \
  locale/voxels_es_DO.ts \
  locale/voxels_es_MX.ts \
  locale/voxels_es.ts \
  locale/voxels_es_UY.ts \
  locale/voxels_et.ts \
  locale/voxels_eu_ES.ts \
  locale/voxels_fa_IR.ts \
  locale/voxels_fa.ts \
  locale/voxels_fi.ts \
  locale/voxels_fr_CA.ts \
  locale/voxels_fr.ts \
  locale/voxels_gl.ts \
  locale/voxels_gu_IN.ts \
  locale/voxels_he.ts \
  locale/voxels_hi_IN.ts \
  locale/voxels_hr.ts \
  locale/voxels_hu.ts \
  locale/voxels_id_ID.ts \
  locale/voxels_it.ts \
  locale/voxels_ja.ts \
  locale/voxels_ka.ts \
  locale/voxels_kk_KZ.ts \
  locale/voxels_ko_KR.ts \
  locale/voxels_ky.ts \
  locale/voxels_la.ts \
  locale/voxels_lt.ts \
  locale/voxels_lv_LV.ts \
  locale/voxels_mn.ts \
  locale/voxels_ms_MY.ts \
  locale/voxels_nb.ts \
  locale/voxels_nl.ts \
  locale/voxels_pam.ts \
  locale/voxels_pl.ts \
  locale/voxels_pt_BR.ts \
  locale/voxels_pt_PT.ts \
  locale/voxels_ro_RO.ts \
  locale/voxels_ru.ts \
  locale/voxels_sah.ts \
  locale/voxels_sk.ts \
  locale/voxels_sl_SI.ts \
  locale/voxels_sq.ts \
  locale/voxels_sr.ts \
  locale/voxels_sv.ts \
  locale/voxels_th_TH.ts \
  locale/voxels_tr.ts \
  locale/voxels_uk.ts \
  locale/voxels_ur_PK.ts \
  locale/voxels_uz@Cyrl.ts \
  locale/voxels_vi.ts \
  locale/voxels_vi_VN.ts \
  locale/voxels_zh_CN.ts \
  locale/voxels_zh_HK.ts \
  locale/voxels_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_voxelsaddressvalidator.cpp \
  moc_voxelsamountfield.cpp \
  moc_voxelsgui.cpp \
  moc_voxelsunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

VOXELS_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  voxels.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_voxels.cpp
QT_QRC = voxels.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

VOXELS_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  voxelsaddressvalidator.h \
  voxelsamountfield.h \
  voxelsgui.h \
  voxelsunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h \
  winshutdownmonitor.h 

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/voxels.ico \
  res/icons/voxels.png \
  res/icons/voxels_testnet.ico \
  res/icons/voxels_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

VOXELS_QT_CPP = \
  voxels.cpp \
  voxelsaddressvalidator.cpp \
  voxelsamountfield.cpp \
  voxelsgui.cpp \
  voxelsunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp \
  winshutdownmonitor.cpp

if ENABLE_WALLET
VOXELS_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  signverifymessagedialog.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

VOXELS_RC = res/voxels-qt-res.rc

libvoxelsqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libvoxelsqt_a_SOURCES = $(VOXELS_QT_CPP) $(VOXELS_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libvoxelsqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libvoxelsqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# voxels-qt binary #
voxels_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
voxels_qt_SOURCES = voxels.cpp
if TARGET_DARWIN
  voxels_qt_SOURCES += $(VOXELS_MM)
endif
if TARGET_WINDOWS
  voxels_qt_SOURCES += $(VOXELS_RC)
endif
voxels_qt_LDADD = libvoxelsqt.a $(LIBVOXELS_SERVER)
if ENABLE_WALLET
voxels_qt_LDADD += $(LIBVOXELS_WALLET)
endif
voxels_qt_LDADD += $(LIBVOXELS_CLI) $(LIBVOXELS_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
voxels_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

voxelsstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/voxelsstrings.cpp

translate: voxelsstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(VOXELS_QT_CPP) $(VOXELS_QT_H) $(VOXELS_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/voxels_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name voxels -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -e '/^\*\*.*Created:/d' $@ > $@.n && mv $@{.n,}
	$(SED) -e '/^\*\*.*by:/d' $@  > $@.n && mv $@{.n,}

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
