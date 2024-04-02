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
	{ 0x38a7735c, "netdev_info" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe9b75d22, "call_netdevice_notifiers" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x552c4aaf, "dev_remove_pack" },
	{ 0xed946a48, "init_net" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x3490f9db, "dev_add_pack" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "585DCB0FA6481F5F20F1011");
MODULE_INFO(rhelversion, "8.0");
