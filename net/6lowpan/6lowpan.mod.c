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
	{ 0xa4a02131, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x402b8281, "__request_module" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x5def83f9, "skb_push" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x4544ea2d, "addrconf_prefix_rcv_add_addr" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x69acdf38, "memcpy" },
	{ 0x10c23a0c, "addrconf_add_linklocal" },
	{ 0xedfc928b, "__ndisc_fill_addr_option" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C576D97120C31780AC34A3B");
MODULE_INFO(rhelversion, "8.0");
