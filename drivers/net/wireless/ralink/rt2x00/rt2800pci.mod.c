#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x28a1c2b9, "rt2x00mac_tx_frames_pending" },
	{ 0xb10c621b, "rt2x00mac_get_ringparam" },
	{ 0xa8fbc8e2, "rt2x00mac_flush" },
	{ 0x2790045f, "rt2x00mac_rfkill_poll" },
	{ 0x3968e53d, "rt2800_get_survey" },
	{ 0xf7bcc2d8, "rt2800_ampdu_action" },
	{ 0xee3986cd, "rt2800_get_tsf" },
	{ 0xb33ad0b, "rt2800_conf_tx" },
	{ 0x29b8430, "rt2800_sta_remove" },
	{ 0xf853ac7f, "rt2800_sta_add" },
	{ 0xb99723e9, "rt2800_set_rts_threshold" },
	{ 0xe73b3421, "rt2800_get_key_seq" },
	{ 0xb873a366, "rt2x00mac_get_stats" },
	{ 0x405fd5bc, "rt2x00mac_sw_scan_complete" },
	{ 0x4be2c67d, "rt2x00mac_sw_scan_start" },
	{ 0x85354f8b, "rt2x00mac_set_key" },
	{ 0xf95108df, "rt2x00mac_configure_filter" },
	{ 0x35e71fa3, "rt2x00mac_bss_info_changed" },
	{ 0x776594d3, "rt2x00mac_config" },
	{ 0xf73cc8c0, "rt2x00mac_remove_interface" },
	{ 0x98af8500, "rt2x00mac_add_interface" },
	{ 0xb10f480, "rt2x00mac_stop" },
	{ 0x6fe3aac8, "rt2x00mac_start" },
	{ 0x443aca38, "rt2x00mac_tx" },
	{ 0xb2fbdb4, "rt2800mmio_get_txwi" },
	{ 0xd91d94da, "rt2800mmio_init_registers" },
	{ 0x4df6a885, "rt2x00mmio_regbusy_read" },
	{ 0x231d84dd, "rt2800_config" },
	{ 0x54da2878, "rt2800_config_ant" },
	{ 0xe9e6589a, "rt2800_config_erp" },
	{ 0x8ac4631, "rt2800_config_intf" },
	{ 0x8f60f48e, "rt2800_config_filter" },
	{ 0xc664174a, "rt2800_config_pairwise_key" },
	{ 0x57e4885f, "rt2800_config_shared_key" },
	{ 0xe235aec3, "rt2800mmio_fill_rxdone" },
	{ 0x6c3b33e7, "rt2800_clear_beacon" },
	{ 0xead04c7f, "rt2800_write_beacon" },
	{ 0xa669efb2, "rt2800_write_tx_data" },
	{ 0x35c0863a, "rt2800mmio_write_tx_desc" },
	{ 0x78ad2e8e, "rt2x00mmio_flush_queue" },
	{ 0xab0cb442, "rt2800mmio_stop_queue" },
	{ 0xde112de0, "rt2800mmio_kick_queue" },
	{ 0xc6b704f6, "rt2800mmio_start_queue" },
	{ 0x5ffe3faf, "rt2800_vco_calibration" },
	{ 0xd83994da, "rt2800_gain_calibration" },
	{ 0x53923a5e, "rt2800_link_tuner" },
	{ 0xc3c67ebc, "rt2800_reset_tuner" },
	{ 0xc2ac6ae, "rt2800_link_stats" },
	{ 0x316c43f3, "rt2800_rfkill_poll" },
	{ 0x29178f5, "rt2800mmio_clear_entry" },
	{ 0x424397a7, "rt2800mmio_get_entry_state" },
	{ 0x954dbd88, "rt2x00mmio_uninitialize" },
	{ 0x8e326247, "rt2x00mmio_initialize" },
	{ 0x5f1aa733, "rt2800_load_firmware" },
	{ 0x6e6dbf5d, "rt2800_check_firmware" },
	{ 0x441bd8f4, "rt2800_probe_hw" },
	{ 0xc6a1455e, "rt2800mmio_autowake_tasklet" },
	{ 0x92c0bcd1, "rt2800mmio_rxdone_tasklet" },
	{ 0x2505789d, "rt2800mmio_tbtt_tasklet" },
	{ 0xfad1430, "rt2800mmio_pretbtt_tasklet" },
	{ 0xe28f94c7, "rt2800mmio_txstatus_tasklet" },
	{ 0x5fa4db64, "rt2800mmio_interrupt" },
	{ 0x22e97e13, "rt2800_rt2x00debug" },
	{ 0xd4a342b8, "rt2800mmio_queue_init" },
	{ 0x20e05706, "rt2x00pci_resume" },
	{ 0xb7765e10, "rt2x00pci_suspend" },
	{ 0x71ea80fe, "rt2x00pci_remove" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xde98a1b3, "rt2800mmio_enable_radio" },
	{ 0xd70a8441, "rt2800mmio_toggle_irq" },
	{ 0xfeb3528a, "rt2800_mcu_request" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb5848bae, "__iowrite32_copy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x3c2d7d27, "rt2800_read_eeprom_efuse" },
	{ 0xac2fde26, "rt2800_efuse_detect" },
	{ 0x9384c52c, "rt2x00pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2800lib,rt2800mmio,rt2x00mmio,rt2x00pci,eeprom_93cx6";

MODULE_ALIAS("pci:v00001814d00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000781sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007708sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007728sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007738sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007748sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007768sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001462d0000891Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A3Bd00001059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003593sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000359Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C0E2612FA591202C7EF7869");
MODULE_INFO(rhelversion, "8.0");
