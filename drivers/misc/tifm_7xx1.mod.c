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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xfd94814e, "complete_all" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9d024c29, "tifm_add_adapter" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x53b343f8, "tifm_alloc_adapter" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x27e1a049, "printk" },
	{ 0xd257960c, "device_register" },
	{ 0x761d4db, "tifm_alloc_device" },
	{ 0x33923b5b, "tifm_free_device" },
	{ 0xd5d3f93b, "tifm_free_adapter" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x92c878b0, "pci_intx" },
	{ 0xedc03953, "iounmap" },
	{ 0x6cbaecc2, "tifm_remove_adapter" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2c4513fd, "tifm_queue_work" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tifm_core";

MODULE_ALIAS("pci:v0000104Cd00008033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000803Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "47F8E69BD95B4B74B6BBBB7");
MODULE_INFO(rhelversion, "8.0");
