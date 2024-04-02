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
	{ 0x9f087c57, "tifm_eject" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xf7d6636f, "current_task" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa0d793fe, "tifm_map_sg" },
	{ 0x27e1a049, "printk" },
	{ 0x41533704, "memstick_add_host" },
	{ 0xb84181c5, "tifm_has_ms_pif" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x2502643a, "memstick_alloc_host" },
	{ 0x71e3a23d, "tifm_unmap_sg" },
	{ 0x52a7c81, "memstick_free_host" },
	{ 0xbe3d22f3, "memstick_remove_host" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x54e28e88, "memstick_next_req" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x36e44007, "memstick_suspend_host" },
	{ 0xdd43ab9d, "memstick_resume_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tifm_core,memstick";


MODULE_INFO(srcversion, "2DC3774EB499E697999DFDE");
MODULE_INFO(rhelversion, "8.0");
