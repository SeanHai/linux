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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbe3d22f3, "memstick_remove_host" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x52a7c81, "memstick_free_host" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28318305, "snprintf" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x2502643a, "memstick_alloc_host" },
	{ 0x41533704, "memstick_add_host" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x54e28e88, "memstick_next_req" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x36e44007, "memstick_suspend_host" },
	{ 0xcbbaea64, "memstick_detect_change" },
	{ 0xdd43ab9d, "memstick_resume_host" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xf7d6636f, "current_task" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=memstick";

MODULE_ALIAS("pci:v0000197Bd00002383sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002388sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002393sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9DA8E49B4C1E668D0070016");
MODULE_INFO(rhelversion, "8.0");
