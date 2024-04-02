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
	{ 0xe9b41467, "param_ops_string" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xe9dccf97, "pci_setup_cardbus" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x4f223667, "pcmcia_register_socket" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xe205255f, "pccard_static_ops" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xcf97f3bd, "dead_socket" },
	{ 0xb2a63c19, "pcibios_resource_to_bus" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xd34b23eb, "pci_claim_resource" },
	{ 0xae600961, "pcibios_bus_to_resource" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x360b1afe, "probe_irq_mask" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0x318f7969, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25dfaf78, "pcmcia_parse_events" },
	{ 0x8d710940, "pci_match_id" },
	{ 0xe6478472, "_dev_info" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9ddf75, "pcmcia_unregister_socket" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x28318305, "snprintf" },
	{ 0x3a5ded62, "allocate_resource" },
	{ 0x3da171f9, "pci_mem_start" },
	{ 0x25a21c88, "pci_bus_resource_n" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x36508a4d, "pci_get_slot" },
	{ 0x5b1f6ffd, "release_resource" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000104Cd0000AC13sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Asv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC12sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC15sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Esv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC17sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC19sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Csv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Dsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Fsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC51sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Bsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC52sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC56sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC55sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC54sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC41sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008011sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC42sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC44sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC46sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC16sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC50sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008031sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008036sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008039sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Esv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Dsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC49sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC47sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC48sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001411sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001412sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001421sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001422sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001211sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001225sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001410sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001420sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000465sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000466sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000475sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000476sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000478sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001179d0000060Asv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001179d0000060Fsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001179d00000617sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001217d*sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v*d*sv*sd*bc06sc07i00*");

MODULE_INFO(srcversion, "61EF6C46158DAEA4DD6DFF4");
MODULE_INFO(rhelversion, "8.0");
