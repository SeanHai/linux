#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb20fe1f5, "rt2x00lib_resume" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x194811f6, "ieee80211_alloc_hw_nm" },
	{ 0x27e1a049, "printk" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x835648b8, "pci_set_mwi" },
	{ 0x8d45615d, "rt2x00lib_remove_dev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xac5e6228, "pci_clear_mwi" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x275d5ec2, "ieee80211_free_hw" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x95656336, "rt2x00lib_probe_dev" },
	{ 0x7a806227, "rt2x00lib_suspend" },
	{ 0x93527c4c, "pci_save_state" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "8D3C291CA5B9931C1B7405D");
MODULE_INFO(rhelversion, "8.0");
