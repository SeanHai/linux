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
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x110b1d91, "sg_miter_stop" },
	{ 0x165f9036, "cb710_sg_dwiter_read_next_block" },
	{ 0x57a9e884, "sg_miter_start" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x23c38cc3, "cb710_pci_update_config_reg" },
	{ 0x7183876f, "cb710_sg_dwiter_write_next_block" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf10de535, "ioread8" },
	{ 0xab7505cc, "mmc_request_done" },
	{ 0xf570d6aa, "mmc_detect_change" },
	{ 0x848d372e, "iowrite8" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xb73a2f0d, "mmc_add_host" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xb25e30a0, "mmc_alloc_host" },
	{ 0x31c71421, "mmc_free_host" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xb7c2d3e4, "cb710_set_irq_handler" },
	{ 0x944b609, "mmc_remove_host" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xc5534d64, "ioread16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cb710,mmc_core";


MODULE_INFO(srcversion, "C691AC20BAB9D37F5C887D2");
MODULE_INFO(rhelversion, "8.0");
