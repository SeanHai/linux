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
	{ 0xfe11a6ae, "rt2x00mac_get_antenna" },
	{ 0x5b1c3643, "rt2x00mac_set_antenna" },
	{ 0xa8fbc8e2, "rt2x00mac_flush" },
	{ 0x2790045f, "rt2x00mac_rfkill_poll" },
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
	{ 0x78ad2e8e, "rt2x00mmio_flush_queue" },
	{ 0x954dbd88, "rt2x00mmio_uninitialize" },
	{ 0x8e326247, "rt2x00mmio_initialize" },
	{ 0x20e05706, "rt2x00pci_resume" },
	{ 0xb7765e10, "rt2x00pci_suspend" },
	{ 0x71ea80fe, "rt2x00pci_remove" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3acff9be, "rt2x00mmio_rxdone" },
	{ 0x1b176013, "rt2x00lib_txdone" },
	{ 0xdb1ff350, "rt2x00queue_get_entry" },
	{ 0x5df43743, "rt2x00lib_txdone_noinfo" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x76facfdb, "rt2x00lib_beacondone" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd4f38c6e, "rt2x00lib_set_mac_address" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0xd819a524, "crc_itu_t_table" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeb9faa8b, "__skb_pad" },
	{ 0x18550680, "rt2x00debug_dump_frame" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5848bae, "__iowrite32_copy" },
	{ 0xf86185ee, "rt2x00mac_conf_tx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4df6a885, "rt2x00mmio_regbusy_read" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9384c52c, "rt2x00pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00mmio,rt2x00pci,eeprom_93cx6,crc-itu-t";

MODULE_ALIAS("pci:v00001814d00000301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000401sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E2D9B82FF13AE2B1227CF2D");
MODULE_INFO(rhelversion, "8.0");
