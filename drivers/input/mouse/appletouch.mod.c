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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfe7843b, "input_event" },
	{ 0xf789deff, "input_register_device" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x28318305, "snprintf" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xe6478472, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05ACp020Ed*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp020Fd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp030Ad*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp030Bd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0214d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0215d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0216d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0217d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0218d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0219d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp021Ad*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp021Bd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp021Cd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0229d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp022Ad*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp022Bd*dc*dsc*dp*ic03isc*ip02in*");

MODULE_INFO(srcversion, "BBDDE49EB1204BA9C431741");
MODULE_INFO(rhelversion, "8.0");
