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
	{ 0xbca367c9, "ir_raw_handler_unregister" },
	{ 0x27e1a049, "printk" },
	{ 0xaceb5182, "ir_raw_handler_register" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7cf52901, "ir_raw_gen_manchester" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x28318305, "snprintf" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfe7843b, "input_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";


MODULE_INFO(srcversion, "62B651478862F7630F5B970");
MODULE_INFO(rhelversion, "8.0");
