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
	{ 0xec89da9c, "param_ops_ushort" },
	{ 0x4fd5932f, "param_ops_byte" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xa59c742b, "usbatm_usb_disconnect" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x59651a10, "usb_driver_claim_interface" },
	{ 0x7018acf, "usb_altnum_to_altsetting" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xb9c51a0c, "usb_driver_release_interface" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdb099315, "usbatm_usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm";


MODULE_INFO(srcversion, "8874015DD65844BE4130A67");
MODULE_INFO(rhelversion, "8.0");
