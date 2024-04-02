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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xcf5d91a1, "usb_get_intf" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x29361773, "complete" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xe0024da3, "usb_put_intf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v8086pDF3Bd*dcFFdscFFdpFFicFFiscFFipFFin*");
MODULE_ALIAS("usb:v15A9p0005d*dcFFdscFFdpFFicFFiscFFipFFin*");
MODULE_ALIAS("usb:v07D1p3802d*dcFFdscFFdpFFicFFiscFFipFFin*");
MODULE_ALIAS("usb:v050Dp305Ad*dcFFdscFFdpFFicFFiscFFipFFin*");
MODULE_ALIAS("usb:v3495p3007d*dcFFdscFFdpFFicFFiscFFipFFin*");

MODULE_INFO(srcversion, "96F34D3B883DF1ED0AFADE3");
MODULE_INFO(rhelversion, "8.0");
