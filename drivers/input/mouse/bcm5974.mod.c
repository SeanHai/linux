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
	{ 0xdc75c81f, "input_free_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0x1e429171, "input_mt_init_slots" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x28318305, "snprintf" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xa1654d34, "input_mt_sync_frame" },
	{ 0x480ba3d3, "input_mt_report_slot_state" },
	{ 0xfe7843b, "input_event" },
	{ 0xc1f4ce8d, "input_mt_assign_slots" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x27e1a049, "printk" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05ACp0223d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0224d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0225d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0230d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0231d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0232d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0236d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0237d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0238d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp023Fd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0240d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0241d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0242d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0243d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0244d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0245d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0246d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0247d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0249d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Ad*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Bd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Cd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Dd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp024Ed*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0252d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0253d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0254d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0262d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0263d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0264d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0259d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp025Ad*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp025Bd*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0290d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0291d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0292d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0272d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0273d*dc*dsc*dp*ic03isc*ip02in*");
MODULE_ALIAS("usb:v05ACp0274d*dc*dsc*dp*ic03isc*ip02in*");

MODULE_INFO(srcversion, "0F59A8F53AFB34C8DA9B2DE");
MODULE_INFO(rhelversion, "8.0");
