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
	{ 0x168010ea, "tifm_unregister_driver" },
	{ 0x3c2d0e04, "tifm_register_driver" },
	{ 0xa0d793fe, "tifm_map_sg" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x944b609, "mmc_remove_host" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xab7505cc, "mmc_request_done" },
	{ 0x71e3a23d, "tifm_unmap_sg" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x9f087c57, "tifm_eject" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf7d6636f, "current_task" },
	{ 0xb73a2f0d, "mmc_add_host" },
	{ 0x31c71421, "mmc_free_host" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xb25e30a0, "mmc_alloc_host" },
	{ 0x27e1a049, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tifm_core,mmc_core";


MODULE_INFO(srcversion, "756022C74A017EC18F753F7");
MODULE_INFO(rhelversion, "8.0");
