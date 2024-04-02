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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x27e1a049, "printk" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe5867808, "dlci_ioctl_set" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x509f625d, "consume_skb" },
	{ 0x5eb49f1a, "netdev_notice" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x9166fada, "strncpy" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa4a02131, "register_netdevice" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0xe6e34593, "dev_get_by_name" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xcac1f1ed, "__dev_get_by_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5def83f9, "skb_push" },
	{ 0xea937c72, "dev_set_mtu" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xed946a48, "init_net" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7F857F386B8DB0CB289E8BE");
MODULE_INFO(rhelversion, "8.0");
