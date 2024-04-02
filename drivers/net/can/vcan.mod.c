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
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0x27e1a049, "printk" },
	{ 0xfca44c56, "netif_rx_ni" },
	{ 0xce2254bd, "sock_efree" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x509f625d, "consume_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F0A8B65028FD4CD962F21DA");
MODULE_INFO(rhelversion, "8.0");
