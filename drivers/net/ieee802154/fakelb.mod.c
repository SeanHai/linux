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
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0xe6478472, "_dev_info" },
	{ 0x1e538a6b, "ieee802154_register_hw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18a5cd0b, "ieee802154_alloc_hw" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbc3a0670, "ieee802154_xmit_complete" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x4a1f81ad, "ieee802154_rx_irqsafe" },
	{ 0x25ed0a67, "__pskb_copy_fclone" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x1b2e8e8b, "ieee802154_free_hw" },
	{ 0xed74ebbc, "ieee802154_unregister_hw" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac802154";


MODULE_INFO(srcversion, "644B252BC5CF1EAB2110763");
MODULE_INFO(rhelversion, "8.0");
