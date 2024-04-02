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
	{ 0x532b50b1, "xt_unregister_target" },
	{ 0x1f647f51, "xt_register_target" },
	{ 0x27e1a049, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x577cee77, "led_trigger_register" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6ebfb52e, "led_trigger_blink_oneshot" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1495ef, "led_trigger_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2423d4cd, "led_trigger_unregister" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "520AFA18C59D07A5470A863");
MODULE_INFO(rhelversion, "8.0");
