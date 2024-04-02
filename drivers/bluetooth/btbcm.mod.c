#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xf9a482f9, "msleep" },
	{ 0x6b3a6c0f, "__hci_cmd_sync" },
	{ 0x47022514, "bt_err" },
	{ 0xd7442057, "bt_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x28318305, "snprintf" },
	{ 0x84277b2a, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "909248095707926910CFD70");
MODULE_INFO(rhelversion, "8.0");
