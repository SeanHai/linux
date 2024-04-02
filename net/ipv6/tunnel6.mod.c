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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2ec6987d, "icmpv6_send" },
	{ 0xba41a8bd, "inet6_add_protocol" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x27e1a049, "printk" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xce4ad748, "inet6_del_protocol" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "38B58E59E28B46EF8898724");
MODULE_INFO(rhelversion, "8.0");
