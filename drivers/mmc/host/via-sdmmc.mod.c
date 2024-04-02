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
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0xe6478472, "_dev_info" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf570d6aa, "mmc_detect_change" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xb73a2f0d, "mmc_add_host" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb25e30a0, "mmc_alloc_host" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xab7505cc, "mmc_request_done" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x27e1a049, "printk" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x31c71421, "mmc_free_host" },
	{ 0xedc03953, "iounmap" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x944b609, "mmc_remove_host" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core";

MODULE_ALIAS("pci:v00001106d00009530sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D69DC18CB8F7219191B253C");
MODULE_INFO(rhelversion, "8.0");
