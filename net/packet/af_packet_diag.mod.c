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
	{ 0x9d8ed0db, "sock_diag_put_meminfo" },
	{ 0xf712e17d, "from_kuid_munged" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x41ee8ccc, "sock_diag_unregister" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x7dd10241, "sock_diag_put_filterinfo" },
	{ 0xb29c9658, "sock_i_ino" },
	{ 0x8bb0b0ad, "fanout_mutex" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xb8a9fc36, "sock_diag_register" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf952e22a, "nla_reserve_nohdr" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf60e31a1, "sock_diag_save_cookie" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb3ac9813, "sock_i_uid" },
	{ 0xfe3ac6f4, "__netlink_dump_start" },
	{ 0xcdc4e378, "netlink_net_capable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3F9604BB26397DAB932C079");
MODULE_INFO(rhelversion, "8.0");
