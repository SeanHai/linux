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
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x4ae481a4, "flexcop_device_initialize" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x47f10748, "flexcop_device_kfree" },
	{ 0xdb151103, "flexcop_sram_ctrl" },
	{ 0xfb578fc5, "memset" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x6fab717d, "flexcop_device_kmalloc" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xebf74d24, "flexcop_sram_set_dest" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ccad732, "flexcop_pass_dmx_packets" },
	{ 0x1263136f, "flexcop_wan_set_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xfe57a5cb, "flexcop_device_exit" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=b2c2-flexcop";

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DEDF7E3A367C7730CFF23E2");
MODULE_INFO(rhelversion, "8.0");
