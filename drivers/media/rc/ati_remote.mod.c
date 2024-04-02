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
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x27e1a049, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x5792f848, "strlcpy" },
	{ 0x28318305, "snprintf" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x6c7f12ee, "rc_keyup" },
	{ 0xfa42bb03, "rc_keydown_notimeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6874d351, "rc_g_keycode_from_table" },
	{ 0xfe7843b, "input_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xe6478472, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("usb:v0BC7p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0008d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "428CC54C5B0A0B01A52A2D7");
MODULE_INFO(rhelversion, "8.0");
